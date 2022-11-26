#include<stdio.h>

// Returning multiple values from a function in C
void assign(int *num1, int *num2, char *c)
{
	*num1=20;
	*num2=30;
	*c='S';
}

int main()
{
	int num1, num2;
	char c;

	assign(&num1, &num2, &c);
	printf("num1 = %d, num2 = %d, c = %c", num1, num2);
	return 0;
	
}