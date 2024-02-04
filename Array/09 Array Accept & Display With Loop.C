#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
		int Num[5] = {}, i = 0;

		for(i = 0; i < 5; i++ )
        {
            printf("\n Element Number %d = %d.", i+101, Num[i]);
        }

        getch();
        //system("cls");

		printf("\n\n Enter 5 Array Elements => \n ");

        for(i = 0; i < 5; i++ )
        {
            printf("\n Enter %d Element : ", i+1);
            scanf("%d",&Num[i]);
        }

        getch();
        //system("cls");

		printf("\n Given Array Elements are => \n ");

		for(i = 0; i < 5; i++ )
        {
            printf("\n Element Number %d = %d.", i+1001, Num[i]);
        }

        getch();
        return 0;
}
