#include "WhiteChecker.h"
//#include <stdio.h>
//#include <termios.h>
//
//int main() {
//	struct termios old_termios, new_termios;
//	char input1, input2;
//
//	// Save the current terminal settings
//	tcgetattr(0, &old_termios);
//
//	// Set non-blocking mode
	/*new_termios = old_termios;
	new_termios.c_lflag &= ~ICANON;
	tcsetattr(0, TCSANOW, &new_termios);*/
//
//	// Read the first input
//	input1 = getchar();
//
//	// Read the second input
//	input2 = getchar();
//
//	// Restore the terminal settings
//	tcsetattr(0, TCSANOW, &old_termios);
//
//	// Print the inputs
//	printf("Input 1: %c\n", input1);
//	printf("Input 2: %c\n", input2);
//
//	return 0;