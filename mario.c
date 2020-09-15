#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>

int main(void){
	// Create variables for height and error detection
	int height;
	bool error = false;
	// Use do while loop to ensure only a valid input is accepted
	do{
		printf("Enter a non-negative integer less than 23: ");
		scanf("%d", &height);
		if (height > 23 || height < 0) {
			error = true;
			// Need to flush the input stream otherwise scanf keeps reading the same value and
			// causes an infinite loop
			fflush(stdin);
		} else {
			error = false;
		}
		} while(error);

	// Use for loop for each line
	for(int line = 0; line < height; line++){
		//For loop for creating spaces in line
		for(int numOfSpaces = 0; numOfSpaces < height - (line + 1); numOfSpaces++){
			printf(" ");
		}
		// For loop for creating hashes in line
		for(int numOfHash = 0; numOfHash <= line + 1; numOfHash++){
			printf("#");
		}
		// Print a newline after every line
		printf("\n");
	}

	return 0;
}