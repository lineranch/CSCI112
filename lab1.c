#include <stdio.h>

/*Hunter Line
 * Lab 1, CSCI 112
 * 1/13/2019
 */


int main(void){

	// Initialized local variables
	float starting_odometer, ending_odometer, total_travel, reimbursement;
	float gas_cost = .35;

	// Print statements telling the user what they need to do
	printf("MILEAGE REIMBURSMENT CALCULATOR\n");
	printf("Enter beginning odometer readings\n");

	// Assigns the starting_odometer a value
	scanf("%f", &starting_odometer);

	printf("Enter ending odometer readings\n");
	scanf("%f", &ending_odometer);

	// Previous variables are assigned values based on the user's input
	total_travel = ending_odometer - starting_odometer;
	reimbursement =  total_travel * gas_cost;

	// Prints the total miles traveled and total reimbursement
	printf("You traveled %.1f miles. At $0.35 per mile, your reimbursement is $%.2f", total_travel, reimbursement);


	printf("\n");
	return(0);

}
