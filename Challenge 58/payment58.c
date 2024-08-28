//calculate the salary depending on hours
//pay rate $12/hours
//overtime, excess of 40h is 1.5 pay
//tax rate 155% first 300, 20% next 150 25% rest

#include <stdio.h>

#define PAYRATE 12.00 //i didt think of this im a dumbass

int main() {
	
	double payBefore;
	double payAfter;
	double taxes;
	int hours = 0;
	printf("Please enter the amount of hours you've worked this week: ");
	scanf("%d", &hours);
	
	if (hours < 40) {
		payBefore = (double) (hours * 12.00);
		printf("Before taxes you made $ %.2lf\n", payBefore);
	}
	else {
		payBefore = (double) ((40 * 12.00) + (hours - 40) * 18.00); //first 40 hours are 12, then 18
		printf("Before taxes you made $ %.2lf\n", payBefore);
	}
	//now the tax
	if(payBefore <= 300.00) {
		taxes = 0.15 * payBefore; //15% first 300
	}
	else if (payBefore < 450.00 && payBefore > 300.00) {
		taxes = (payBefore - 300.00) * 0.20 + 300.00 * 0.15;
	}
	else {
		taxes = (payBefore - 450.00) * 0.25 + 300.00 * 0.15 + 150 * 0.20;
	}
	payAfter = payBefore - taxes;
	printf("Your total taxes ascend to $ %0.2lf\n", taxes);
	printf("After taxes though you made $ %.2lf\n", payAfter);
	return 0;
}

 