#include<stdio.h>
#include<math.h>
int main (){
	double Principal;
	double rate;
	double time;
	double interest;
	
	printf("Enter Principal: ");
	scanf("%lf",&Principal);
	
	printf("Enter rate of interest: ");
	scanf("%lf",&rate);
	
	printf("Enter number of years: ");
	scanf("%lf",&time);
	
	interest=(Principal*rate*time)/100;
	printf("simple_interest:%.2lf",interest);
	
	return 0; 
	
}
