#include<stdio.h>
main()
{
	int i,n,fact=1;
	printf("Enter the Number\n"); //Enter the Number
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;  //when i wil increase towards n then fact will multiply with each number
		}
		printf("Factorial is %d",fact); //Factorial of number wil be shown
}
