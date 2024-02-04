#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

int main()
{
		int Num[Size] = {}, i = 0, eCnt = 0, zCnt = 0, oCnt = 0;

		printf("\n\n Enter %d Array Elements => \n ",Size);

        for(i = 0; i < Size; i++ )
        {
            printf("\n Enter %d Element : ", i+1);
            scanf("%d",&Num[i]);
        }

        getch();
        //system("cls");

		for(i = 0; i < Size; i++)
        {
            if(Num[i] == 0)
            {
                zCnt++;
            }
            else if( Num[i] % 2 == 1 )
            {
                oCnt++;
            }
            else
            {
                eCnt++;
            }
        }

        printf("\n EVEN Element Count in Array = %d.", eCnt);
        printf("\n ODD  Element Count in Array = %d.", oCnt);
        printf("\n Zero Element Count in Array = %d.", zCnt);

        getch();
        return 0;
}
