#include "ReversingString.h"
#include <stdio.h>

char *ReversingString(char *str) {

		int length = 0, i = 0;
		static char *rstr;
		static char temp[10];

		length = getStringLength(str);	//Counts the string length

		while (length != 0) {				//Reversing string order and assign to temp
				temp[i] = str[length - 1];
				i++;
				length--;
		}

		rstr = temp;										//Transfer the array to the pointer
		return rstr;
}

int getStringLength (char *str) {

  	int counter = 0;

  	if (str == NULL || str[0] == '\0') {	// Check if string is NULL or empty
			return 0;
		}

		else {

	    while (str[counter] != '\0') { //Counts string until '\0'
			counter++;
			}

			return counter;
		}

	}
