#include <stdio.h>
#include <math.h>

/*Hunter Line
 * Lab 2, CSCI 112
 * 1/23/2019
 */
// This program takes in the user's height and weight and calculates BMI

	void calculateBMI(double height, double weight) {
		 // Assigns the variable BMI with the BMI formula
		double  BMI = ((703 * weight) / pow(height, 2));

		// The outer if statement checks to see if the user's inputs are greater than zero
		if (height>= 0 && weight >= 0) {
		printf("\nYour height is %.1f inches\nYour weight is %.1f pounds\nYour BMI is %.1f\nYour weight status is ", height, weight, BMI);
		// This set of nested if statements determed what the user's weight status is based on the BMI calculation
			if (BMI < 18.5) {
				printf("underweight\n\n");
			}
			if (BMI >= 18.5 && BMI <= 24.9) {
				printf("normal\n\n");
			}
			if (BMI >= 25 && BMI <= 29.9) {
				printf("overweight\n\n");
			}
			if (BMI >= 30) {
				printf("obese\n\n");
			}
		}
		// This is the default print statement if the user inputs a invalid input
			else {
				printf("Atleast one number is negative. Please enter in numbers that are greater than or equal to 0. \n");
			}



		return;
	}





	int main(void){
		// Initializing variables
		double  height_inches, weight_pounds;

		// Print Statements asking for the user's height and weight. The scanner then assigns the input to variables height_inches and weight_pounds 
		printf("\nPlease enter your height in inches and weight in pounds in a, b format:\n");
		scanf("%lf,%lf", &height_inches, &weight_pounds);
	
		// The fucntion calculateBMI calculates the user's BMI using the users inputs
		calculateBMI(height_inches, weight_pounds);



		return(0);
	}




