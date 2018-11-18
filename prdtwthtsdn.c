#include<stdio.h>
void main()
{
	int num1,num2,k=0,l=0;
	printf("Enter the number 1:");
	scanf("%d",&num1);
	printf("Enter the number 2:");
	scanf("%d",&num2);
	while(l<num2)
	{
		k+=num1;
		l++;
	}
	printf("Product of the number is: %d",k);
}
