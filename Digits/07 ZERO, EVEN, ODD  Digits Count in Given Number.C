///ZERO, EVEN, ODD  Digits Count in Given Number.C
#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, Dig = 0, zCnt = 0, oCnt = 0, eCnt = 0;

        printf("\n Enter a Number: ");
        scanf("%d",&No);

        Temp = No;

        while( Temp != 0 )
        {
            Dig = Temp % 10;

            if(Dig == 0)
            {
                zCnt++;
            }
            else if(Dig % 2 == 1)
            {
                oCnt++;
            }
            else
            {
                eCnt++;
            }

            Temp = Temp / 10;
        }

        printf("\n\n EVEN Digits Count in %d = %d.",No, eCnt);
        printf("\n\n ODD  Digits Count in %d = %d.",No, oCnt);
        printf("\n\n Zero Digits Count in %d = %d.",No, zCnt);


        getch();
        return 0;
}
