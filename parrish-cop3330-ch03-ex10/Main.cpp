/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Cameron Parrish
 */

#include "Header.h"
int main() {
	char operation;
	double first, second, answer;
	std::cout << "Enter the Operation:  ";

	// Gets the first char (which is the operation)
	// Then gets the inputs for the first and second number
	operation = getchar();
	cin >> first;
	cin >> second;

	switch (operation) {
	case '+':
		answer = first + second;
		std::cout << first  << " + "  << second << " = " << answer;
		break;
	case '-':
		answer = first - second;
		std::cout << first << " - " << second << " = " << answer;
		break;
	case '*':
		answer = first * second;
		std::cout << first << " * " << second << " = " << answer;
		break;
	case '/':
		answer = first / second;
		std::cout << first << " / " << second << " = " << answer;
		break;
	default:
		std::cout << "This is not a valid input";
		break;
	}




	return 0;
}