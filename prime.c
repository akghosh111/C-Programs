#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,flag=0;
    printf("\n Enter a number : ");
    scanf("%d", &n);
    for (i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        
    }
    if(n==1)
    {
       printf("\n 1 is neither Prime nor composite");
    }
    else
    {
        if(flag==0)
        printf("%d is a Prime Number",n);
        else
        printf("%d is not a prime number",n);
        
    }
    
    
    getch();
}