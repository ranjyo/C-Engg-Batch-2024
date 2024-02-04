#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, dCnt = 0;

    printf("\n Enter a Number: ");
    scanf("%d",&No);

    Temp = No;

    while(Temp > 0)
    {
        dCnt++;
        Temp = Temp / 10;
    }

    printf("\n\n Digits in %d = %d.",No, dCnt);

    getch();
    return 0;
}
