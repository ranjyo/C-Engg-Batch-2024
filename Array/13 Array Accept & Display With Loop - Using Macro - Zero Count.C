#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5

int main()
{
		int Num[Size] = {}, i = 0, zCnt = 0;

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
        }

        printf("\n Zero Count in Array = %d.", zCnt);

        getch();
        return 0;
}
