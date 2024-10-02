#include<stdio.h>
#include<math.h> 
int main(){

	float principal ;
	float rate;
	float time;
	float compoundInterest;
	float amount;
	int n; 
	
	printf("enter the principal amount:");
	scanf("%f",&principal);
	
	printf("rate");
	scanf("%f",& rate);
	
	printf("time");
	scanf("%f",& time);
	
	printf("enter the number of time interest is compounded in a year:");
	scanf("%d", & n);
	
	//calculate total amount after compoundInterest 
	
	amount = principal* pow((1+rate/100),n*time);
	
	//calculate the compound interest 
	
	compoundInterest = amount - principal;
	
	printf("the total amount after %.2f years is :%2f\n",time,amount);
    printf("compoundInterest is:%2f\n",compoundInterest);
    
    return 0;
}
