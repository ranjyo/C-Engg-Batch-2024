#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5

int main()
{
		int Num[Size] = {}, i = 0, eCnt = 0;

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
            if( Num[i] % 2 == 0 && Num[i] != 0 )
            {
                eCnt++;
            }
        }

        printf("\n EVEN Element Count in Array = %d.", eCnt);

        getch();
        return 0;
}
