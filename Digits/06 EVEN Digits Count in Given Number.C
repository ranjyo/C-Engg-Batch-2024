#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0,Dig = 0, eCnt = 0;

        printf("\n Enter a Number: ");
        scanf("%d",&No);

        Temp = No;

        while( Temp != 0 )
        {
            Dig = Temp % 10;

            if( (Dig % 2) == 0 && Dig != 0)
            {
                eCnt++;
            }
            Temp = Temp / 10;
        }

        printf("\n\n EVEN Digits Count in %d = %d.",No, eCnt);

        getch();
        return 0;
}
