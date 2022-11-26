#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,c=1;
    printf("\n Enter the value for n ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        c=c*i;
    }
    printf("%d",c);
    
    getch();
}