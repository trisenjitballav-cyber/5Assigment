#include<stdio.h>
int main()
{
	int num1, num2,sum;
	printf("Enter number 1 : ");
	scanf("%d",&num1);
	fflush(stdin);
	printf("Enter number 2 : ");
	scanf("%d",&num2);
	fflush(stdin);
	
	sum=num1+num2;
	printf("Sum of the above numbers are : %d",sum);
	
	return 0;
	
}