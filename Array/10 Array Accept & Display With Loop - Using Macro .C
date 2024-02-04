#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

int main()
{
		int Num[Size] = {}, i = 0;

		for(i = 0; i < Size; i++ )
        {
            printf("\n Element Number %d = %d.", i+101, Num[i]);
        }

        getch();
        //system("cls");

		printf("\n\n Enter %d Array Elements => \n ",Size);

        for(i = 0; i < Size; i++ )
        {
            printf("\n Enter %d Element : ", i+1);
            scanf("%d",&Num[i]);
        }

        getch();
        //system("cls");

		printf("\n Given Array Elements are => \n ");

		for(i = 0; i < Size; i++ )
        {
            printf("\n Element Number %d = %d.", i+1001, Num[i]);
        }

        getch();
        return 0;
}
