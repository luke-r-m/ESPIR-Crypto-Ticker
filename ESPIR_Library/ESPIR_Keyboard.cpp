/*
  ESPIR_Keyboard.h - Keyboard for ST7735
  Copyright (c) 2021 Luke Mills.  All right reserved.
*/

#include "ESPIR_Keyboard.h"

// Constructor for Keyboard
ESPIR_Keyboard::ESPIR_Keyboard(Adafruit_ST7735* display)
{
	tft = display;
	
	// Allocate space for buttons
	letters = (Key*) malloc(sizeof(Key) * 26);
	numbers = (Key*) malloc(sizeof(Key) * 10);
	specials = (Key*) malloc(sizeof(Key) * 32);
	bottom_keys = (Key*) malloc(sizeof(Key) * 4);
	
	// Allocate selected key
	selected = (Key*) malloc(sizeof(Key));
	
	// Initialise variables
	selected_index = 0;
	mode = 0;
	current_input_length = 0;
	current_string = (char*) malloc(sizeof(char) * (ABS_MAX_LENGTH));

	for (int i = 0; i < ABS_MAX_LENGTH; i++)
		current_string[i] = '\0';

	enter_pressed = 0;
	
	last_mode = 0;
	last_key = 0;
	
	// Define bottom keys
	int tab_width = 35;
	int button_gap = 5;
	bottom_keys[0] = Key(tft, button_gap, 
		tft -> height() - 15, tab_width, KEY_HEIGHT, "Help", 1);
	bottom_keys[1] = Key(tft, 2*button_gap + tab_width, tft -> height() - 15, 
		tab_width, KEY_HEIGHT, " <--", 1);
	bottom_keys[2] = Key(tft, 3*button_gap + 2*tab_width, 
		tft -> height() - 15, tab_width, KEY_HEIGHT, "Space", 1);
	bottom_keys[3] = Key(tft, 4*button_gap + 3*tab_width, 
		tft -> height() - 15, tab_width, KEY_HEIGHT, "Enter", 1);
	
	int current_letter = 0;
	
	// Define the letters
	char* key_chars[26] = {"q", "w", "e", "r", "t", "y", "u", "i", "o", "p", "a", "s", 
		"d", "f", "g", "h", "j", "k", "l", "z", "x", "c", "v", "b", "n", "m"};
	
	for (int i = 0; i < 10; i++){
		letters[current_letter] = Key(
			tft, map(i, 0, 9, EDGE_BORDER, 
				tft -> width() - NORMAL_KEY_WIDTH - EDGE_BORDER), 
				tft -> height() / 2 + EDGE_BORDER, NORMAL_KEY_WIDTH, 
				KEY_HEIGHT, key_chars[current_letter], 0);
		current_letter++;
	}
	
	for (int i = 0; i < 9; i++){
		letters[current_letter] = Key(tft, map(i, 0, 8, EDGE_BORDER + 
				NORMAL_KEY_WIDTH / 2, 
			tft -> width() - (3 * NORMAL_KEY_WIDTH / 2) - EDGE_BORDER), 
			tft -> height() / 2 + 2*EDGE_BORDER + KEY_HEIGHT, NORMAL_KEY_WIDTH, 
			KEY_HEIGHT, key_chars[current_letter], 0);
		current_letter++;
	}
	
	for (int i = 0; i < 7; i++){
		letters[current_letter] = Key(tft, 
				map(i, 0, 6, EDGE_BORDER + 2 * NORMAL_KEY_WIDTH, 
			tft -> width() - (3 * NORMAL_KEY_WIDTH) - EDGE_BORDER), 
			tft -> height() / 2 + 3 * EDGE_BORDER + 2 * KEY_HEIGHT, NORMAL_KEY_WIDTH, 
			KEY_HEIGHT, key_chars[current_letter], 0);
		current_letter++;
	}
	
	// Define the numbers
	char* key_nums[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
	
	for (int i = 0; i < 10; i++){
		numbers[i] = Key(tft, map(i, 0, 9, EDGE_BORDER + NORMAL_KEY_WIDTH / 2, 
			tft -> width() - (3 * NORMAL_KEY_WIDTH / 2) - EDGE_BORDER), 
			tft -> height() / 2 + 2 * EDGE_BORDER + KEY_HEIGHT, NORMAL_KEY_WIDTH, 
			KEY_HEIGHT, key_nums[i], 0);
	}
	
	// Define the specials
	char* key_specials[32] = {"!", "\"", "#", "$", "%", "&", "\"", "(", ")", 
		"*", "+", ",", "-", ".", "/", ":", ";", "<", "=", ">", "?", "@", "[", 
		"\\", "]", "^", "_", "`", "{", "|", "}", "~"};
	current_letter = 0;
	for (int i = 0; i < 11; i++){
		specials[current_letter] = Key(tft, map(i, 0, 10, EDGE_BORDER, 
			tft -> width() - NORMAL_KEY_WIDTH - EDGE_BORDER), 
			tft -> height() / 2 + EDGE_BORDER, NORMAL_KEY_WIDTH, KEY_HEIGHT, 
			key_specials[current_letter], 0);
		current_letter++;
	}
	
	for (int i = 0; i < 11; i++){
		specials[current_letter] = Key(tft, map(i, 0, 10, EDGE_BORDER, 
			tft -> width() - NORMAL_KEY_WIDTH - EDGE_BORDER), 
			tft -> height() / 2 + 2*EDGE_BORDER + KEY_HEIGHT, NORMAL_KEY_WIDTH, 
			KEY_HEIGHT, key_specials[current_letter], 0);
		current_letter++;
	}
	
	for (int i = 0; i < 10; i++){
		specials[current_letter] = Key(tft, map(i, 0, 9, 
			EDGE_BORDER + NORMAL_KEY_WIDTH / 2, 
			tft -> width() - (3 * NORMAL_KEY_WIDTH/2) - EDGE_BORDER), 
			tft -> height() / 2 + 3 * EDGE_BORDER + 2 * KEY_HEIGHT, NORMAL_KEY_WIDTH, 
			KEY_HEIGHT, key_specials[current_letter], 0);
		current_letter++;
	}
	
	selected = letters;
}

// Interacts with the keyboard
void ESPIR_Keyboard::interact(uint32_t* ir_data){
  if (*ir_data == IR_OK)
    press();

  // 1
  if (*ir_data == IR_ONE){
    setModeClear(0, 14);
	this -> display();
  }

  // 2
  if (*ir_data == IR_TWO){
    setModeClear(1, 14);
	this -> display();
  }

  // 3
  if (*ir_data == IR_THREE){
    setModeClear(2, 0);
	this -> display();
  }

  // 4
  if (*ir_data == IR_FOUR){
    setModeClear(3, 16);
	this -> display();
  }

  // DOWN
  if (*ir_data == IR_DOWN)
    moveDown();

  // UP
  if (*ir_data == IR_UP)
    moveUp();

  // RIGHT
  if (*ir_data == IR_RIGHT)
    moveRight();

  // LEFT
  if (*ir_data == IR_LEFT)
    moveLeft();
}

// Resets the keyboard between inputs
void ESPIR_Keyboard::reset(){
	current_input_length = 0;

	for (int i = 0; i < ABS_MAX_LENGTH; i++)
		current_string[i] = '\0';

	enter_pressed = 0;
}

void ESPIR_Keyboard::setInputLengthLimit(int limit){
	this->length_limit = limit;
}

// Returns the current input
char* ESPIR_Keyboard::getCurrentInput(){
	return current_string;
}

// Returns length of current input
int ESPIR_Keyboard::getCurrentInputLength(){
	return current_input_length;
}


// Performs the action of the currently selected key
void ESPIR_Keyboard::press(){
	if (selected -> action == "Space"){
		if (current_input_length < length_limit){
			// Add space to current string
			current_string[current_input_length] = ' ';
			current_input_length++;
		}
	} else if (selected -> action == " <--"){
		// Remove last element from entered string
		if (current_input_length > 0){
			current_input_length--;
			current_string[current_input_length] = '\0';
		}
	} else if (selected -> action == "Enter"){
		if (current_input_length > 0){
			exitTabs();

			// Signal that enter has been pressed
			enter_pressed = 1;
		}
	} else if (selected -> action == "Help"){
		displayInstructions();
		display();
	} else {
		if (current_input_length < length_limit){
			// Add pressed key to current string
			if (mode == 1){
				current_string[current_input_length] = 
					(char) (selected -> action[0] - 32);
			} else {
				current_string[current_input_length] = selected -> action[0];
			}
			current_input_length++;
		}
	}
	this -> displayCurrentString();
}

// Indicates if the enter key has been pressed
int ESPIR_Keyboard::enterPressed(){
	return enter_pressed;
}

// Go to the bottom row of buttons
void ESPIR_Keyboard::goToTabs(){
	if (mode != 4){
		last_mode = mode;
		last_key = selected_index;
		mode = 4;

		if (selected -> x < tft->width() / 4){
			selected_index = 0;
		} else if (selected -> x < tft->width() / 2){
			selected_index = 1;
		} else if (selected -> x < 3 * tft->width() / 4) {
			selected_index = 2;
		} else {
			selected_index = 3;
		}

		selected = bottom_keys + selected_index;
		selected -> displaySelected(mode);
	}
}

// Leave the bottom row of buttons
void ESPIR_Keyboard::exitTabs(){
	if (mode == 4){
		selected -> display(mode);
		this -> setModeClear(last_mode, last_key);
	}
}

// Display the keyboard on the screen
void ESPIR_Keyboard::display()
{
	
	tft -> fillRect(0, tft -> height() / 2, tft -> width(), 
		tft -> height() / 2, BLACK);

	char temp_mode = mode;
	if (mode == 4){
		temp_mode = last_mode;
	}
	
	if (temp_mode == 0 || temp_mode == 1){
		for (int i = 0; i < 26; i++)
			letters[i].display(temp_mode);
	} else if (temp_mode == 2){
		for (int i = 0; i < 10; i++)
			numbers[i].display(temp_mode);
	} else if (temp_mode == 3) {
		for (int i = 0; i < 32; i++)
			specials[i].display(temp_mode);
	}
	
	for (int i = 0; i < 4; i++)
		bottom_keys[i].display(temp_mode);
	
	selected -> displaySelected(temp_mode);
}

// Set the mode of the keyboard, and set selected key to passed value
void ESPIR_Keyboard::setModeClear(int new_mode, int key_index){
	mode = new_mode;
	selected_index = key_index;
	
	if (mode == 0 || mode == 1){
		selected = letters + key_index;
	} else if (mode == 2){
		selected = numbers + key_index;
	} else {
		selected = specials + key_index;
	}
}

// Displays the given prompt above the keyboard
void ESPIR_Keyboard::displayPrompt(char* prompt)
{
	tft -> fillRect(0, 0, tft -> width(), tft -> height() / 2, BLACK);
	tft -> setTextColor(WHITE);
	tft -> setCursor(0, 0);
	tft -> print(prompt);
}

// Displays the current string that has been entered by the user
void ESPIR_Keyboard::displayCurrentString(){
	tft -> fillRect(0, 10, tft -> width(), tft -> height() / 6, BLACK);
	tft -> setTextColor(LIGHT_GREEN);
	tft -> setCursor(0, 10);
	tft -> print(current_string);
}

// Set the selected key to the key on the right
void ESPIR_Keyboard::moveDown(){
	selected -> display(mode);
	
	if (mode == 0 || mode == 1){
		if (selected_index < 9){
			selected_index += 10;
		} else if (selected_index == 9){
			selected_index = 18;
		} else if (selected_index < 19){
			selected_index += 8;
			if (selected_index < 19){
				selected_index = 19;
			} else if (selected_index > 25){
				selected_index = 25;
			}
		} else if (selected_index < 26){
			goToTabs();
			selected -> displaySelected(mode);
			return;
		}
		
		selected = letters + selected_index;
	} else if (mode == 2) {
		goToTabs();
	} else if (mode == 3){
		if (selected_index < 21){
			selected_index += 11;
		} else if (selected_index == 21){
			selected_index = 31;
		} else if (selected_index < 32){
			goToTabs();
			selected -> displaySelected(mode);
			return;
		}
		
		selected = specials + selected_index;
	}
	
	selected -> displaySelected(mode);
}

// Set the selected key to the key on the right
void ESPIR_Keyboard::moveUp(){
	selected -> display(mode);
	
	if (mode == 0 || mode == 1){
		if (selected_index >= 19){
			selected_index -= 8;
		} else if (selected_index >= 10){
			selected_index -= 10;
		}
		
		selected = letters + selected_index;
	} else if (mode == 3) {
		if (selected_index > 10){
			selected_index -= 11;
		} else if (selected_index > 19){
			selected_index -= 10;
		}
		
		selected = specials + selected_index;
	} else if (mode == 4){
		exitTabs();
	}
	
	selected -> displaySelected(mode);
}

// Set the selected key to the key on the right
void ESPIR_Keyboard::moveRight(){
	selected -> display(mode);
	
	if (mode == 0 || mode == 1){
		selected_index++;
		if (selected_index == 26)
			selected_index = 0;
		
		selected = letters + selected_index;
	} else if (mode == 2){
		selected_index++;
		if (selected_index == 10)
			selected_index = 0;
		
		selected = numbers + selected_index;
	} else if (mode == 3) {
		selected_index++;
		if (selected_index == 32)
			selected_index = 0;
		
		selected = specials + selected_index;
	} else if (mode == 4){
		selected_index++;
		if (selected_index == 4)
			selected_index = 0;
		
		selected = bottom_keys + selected_index;
	}
	
	selected -> displaySelected(mode);
}

// Set the selected key to the key on the left
void ESPIR_Keyboard::moveLeft(){
	selected -> display(mode);
	
	if (mode == 0 || mode == 1){
		if (selected_index == 0){
			selected_index = 25;
		} else {
			selected_index--;
		}
		
		selected = letters + selected_index;
	} else if (mode == 2){
		if (selected_index == 0){
			selected_index = 9;
		} else {
			selected_index--;
		}
		
		selected = numbers + selected_index;
	} else if (mode == 3) {
		if (selected_index == 0){
			selected_index = 31;
		} else {
			selected_index--;
		}
		
		selected = specials + selected_index;
	} else if (mode == 4){
		if (selected_index == 0){
			selected_index = 3;
		} else {
			selected_index--;
		}

		selected = bottom_keys + selected_index;
	}
	
	selected -> displaySelected(mode);
}

// Displays the keyboard instructions for 5 seconds
void ESPIR_Keyboard::displayInstructions(){
  tft -> fillRect(0, tft->height()/2, tft->width(), tft->height()/2, BLACK);
  tft -> setCursor(0, tft->height()/2 + 5);
  tft -> setTextColor(WHITE);
  tft -> println("Use arrows to navigate\n");

  tft->setCursor(0, tft->height()/2 + 18);
  tft -> println("1   : Lower Case");
  tft->setCursor(0, tft->height()/2 + 29);
  tft -> println("2   : Upper Case");
  tft->setCursor(0, tft->height()/2 + 40);
  tft -> println("3   : Numbers");
  tft->setCursor(0, tft->height()/2 + 51);
  tft -> println("4   : Special Characters");
  delay(5000);
}



// Constructor for Key
Key::Key(Adafruit_ST7735* display, int x_pos, int y_pos, int width, 
		int height, char* act, int bottom){
	tft = display;
	x = x_pos;
	y = y_pos;
	w = width;
	h = height;
	action = act;
	bottom_key = bottom;
}

// Display the key
void Key::display(int mode){
	tft -> fillRoundRect(x, y, w, h, 2, DARK_GREY);
	tft -> setCursor(x + 4, y + 2);
	tft -> setTextColor(WHITE);
	if (mode == 1 && bottom_key == 0){
		tft -> print((char) (action[0] - 32));
	} else {
		tft -> print(action);
	}
}

// Display the key as selected
void Key::displaySelected(int mode){
	tft -> fillRoundRect(x, y, w, h, 2, GRAY);
	tft -> setCursor(x + 4, y + 2);
	tft -> setTextColor(BLACK);
	if (mode == 1 && bottom_key == 0){
		tft -> print((char) (action[0] - 32));
	} else {
		tft -> print(action);
	}
}
