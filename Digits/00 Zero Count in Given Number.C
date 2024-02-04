#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, zCnt = 0;

        printf("\n Enter a Number: ");
        scanf("%d",&No);

        Temp = No;

        do
        {
            if((Temp % 10) == 0)
            {
                zCnt++;
            }
            Temp = Temp / 10;
        }while( Temp != 0 );

        printf("\n\n Zero Count in %d = %d.",No, zCnt);

        getch();
        return 0;
}
