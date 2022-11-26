#include <stdio.h>
int main()
{
    int num1, num2, num3;
    int *a1, *a2, *a3;

    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);
    printf("Enter Third Number: ");
    scanf("%d",&num3);
    a1 = &num1;
    a2 = &num2;
    a3 = &num3;
    if(*a1 > *a2 && *a1 > *a3)
    {
	
		printf("%d is the largest number", *a1);
	}
	else if(*a3 > *a1 && *a3 > *a2)
	{
		printf("%d is the largest number", *a3);
	}
    else if(*a2 > *a3)
	{
		printf("%d is the largest number", *a2);
	}
	else
	{
		printf("%d is the largest number", *a3);
	}
    
    return 0;
}