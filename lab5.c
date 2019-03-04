#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*Hunter Line
 * Lab 5, CSCI 112
 * 2/28/2019
 */

	// This function prints out the input's factioral 
	char* fact_calc(int input, char* string){
	
	// Intializes variables
	// Malloc is used to researve memory blocks
	char* asterisk = (char*)malloc(sizeof(char) * 80);		
	char* number = (char*)malloc(sizeof(char) * 80);
	char* finalString = (char*)malloc(sizeof(char) * 160);
	int total = 1;
	
	// I used an if else statement here to check whether or not the input is zero
	// Since 0 is an exceptional case, I thought it would be easier to just hard code what zero's factorial is
	if (input >= 1 && input <= 9 ) {
		
	//sprintf is used to concatenate an integer to the string 
		sprintf(string, "* %d! = ", input); 
		//This for loop scans each multiplication for the factorial. 
		//An if statement checks to see if the for loop has reached the end.
		//Once the if statement is met, then the factorial result and ending asterisk is added to the string
		for (int i = input; i > 0; i--){
			if (i == 1){
				sprintf(number, "%d = ", i);
				strcat(string, number);
				sprintf(number, "%d *\n", total);
				strcat(string, number);
				break;
			}
			// This chunk increases the total and adds the factorial numbers to the string
			total *= i;
			sprintf(number, "%d X ", i);
			strcat(string, number);
		}
	
	// This chunk fills the asterisk array with asterisks
	memset(asterisk, '*', strlen(string) - 1);
	strcat(asterisk, "\n");
	
	

	// This chunk apends everything to the final string
	strcat(finalString, asterisk);
	strcat(finalString, string);
	strcat(finalString, asterisk);
	return(finalString);
		
	
	// This else statement prints zero factorial. 
	// Since 0 is an exceptional case, I thought it would be reasonable to hard code this section.
	} else {

	strcat(finalString, "**********\n* 0! = 1 *\n**********\n");
	return(finalString);	
	}
}



int main(void){
	// Initializes variables
	int input;
	char* string = (char*)malloc(sizeof(char) * 80);

	// This do while grabs the user's input. From there, the user's input determines whether the program calculates the number, ignores invalid input, or ends.
	while(1) {
	printf("Enter an integer between 0 and 9 or -1 to quit => ");
	scanf("%d", &input);
	
	
	if (input >= 0 && input <= 9){
		printf("%s", fact_calc(input,string));
		}	
	else if (input == -1) {
		printf("Thanks for using the program!\n");
		break;
		}
	else{
		printf("Invalid Input\n");
		}
	}

	return(0);
}
