#include<stdio.h>

int main ()

{
	long int i;
	
	printf("Enter your Income : ");
	scanf("%ld",&i);
	
	if (i<=150000)
		printf("No tax");
	
	else if (i>=150001 && i<=300000)
		printf("10%% Tax");
		
	else if (i>=300001 && i<=500000)
		printf("20%% Tax");
		
	else if (i>=500001)
		printf("30%% Tax");
	
	return 0;
}