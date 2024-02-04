#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, dSum = 0;

    printf("\n Enter a Number: ");
    scanf("%d",&No);

    for( Temp = No; Temp > 0 ; dSum += (Temp % 10), Temp /= 10 );

    printf("\n\n Digit Sum %d = %d.",No, dSum);

    getch();
    return 0;
}
