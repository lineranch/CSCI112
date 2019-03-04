#include <stdio.h>
#include <math.h>
/*Hunter Line
 * Lab3, CSCI 112
 * 2/7/2019
 */
// This program creates an amortization table from the user's input. 

	//This void function prints out the amortization table
	void calculateAmortization(double initialPrincipal, double interestRate, double months){
		// Initializing variables
		double interestValue = interestRate;
		double interest, principal, final;
		interestRate*= .01;
		// This variable calculates the payment using the formula provided in the book
		double payment = (initialPrincipal*(interestRate/12))/(1-pow((1+(interestRate/12)), -months));

		// This series of print statements prints the top of the table
		printf("\nPrincipal: %.2lf\tPayment:\t%.2lf\n", initialPrincipal, payment);
		printf("Annual Interest: %.02f\tTerm:\t\t%.0lf Months\n\n", interestValue, months);
		printf("\t\t\t\t\t\tPrincipal\n");
		printf("Payment\t\tInterest\tPrincipal\tBalance\n"); 
		printf("----------------------------------------------------------------\n");

		//This for loop prints each months payment, interest, principle, and principle balance
		int i;
		for (i = 1; i < months + 1; i++) {
		interest = initialPrincipal * (interestRate/12);
		principal = payment - interest;
		initialPrincipal -= principal;
		
		printf("%d\t\t%.2lf\t\t%.2lf\t\t%.2lf\n", i, interest, principal, fabs(initialPrincipal));
		}
		// This prints the final payment
		final = principal + interest;
		printf("----------------------------------------------------------------\n"); 
		printf("Final Payment:\t%.2lf\n", final);

		return;
	}




	int main(int argc, char  *argv[]) {
		//Initializes variables
		double principle, monthlyInterestRate, numberOfPayments;
		
		//Grabs user input via command line
		sscanf(argv[1], "%lf", &principle);
		sscanf(argv[2], "%lf", &monthlyInterestRate);
		sscanf(argv[3], "%lf", &numberOfPayments);
		
		// Input is placed into the calculateAmortization function
		calculateAmortization(principle, monthlyInterestRate, numberOfPayments);
	}
			
