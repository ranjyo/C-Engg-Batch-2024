#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, Rev = 0;

    printf("\n Enter a Number: ");
    scanf("%d",&No);

    Temp = No;

    while(Temp != 0)
    {
        Rev = (Rev * 10) + (Temp % 10);
        Temp = Temp / 10;
    }

    printf("\n\n Reverse of %d = %d.",No, Rev);

    getch();
    return 0;
}
