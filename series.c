// s=1+5+9+13+17+21

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,s=0;
    for (i=1;i<=21;i=i+4)
    {
        s=s+i;
        
    }
    printf("\n Sum of series %d",s);
    getch();
}