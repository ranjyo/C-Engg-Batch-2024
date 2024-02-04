#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0,Dig = 0, oCnt = 0;

        printf("\n Enter a Number: ");
        scanf("%d",&No);

        Temp = No;

        while( Temp != 0 )
        {
            Dig = Temp % 10;

            if( (Dig % 2) == 1)
            {
                oCnt++;
            }
            Temp = Temp / 10;
        }

        printf("\n\n Odd Digits Count in %d = %d.",No, oCnt);

        getch();
        return 0;
}
