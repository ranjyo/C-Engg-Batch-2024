#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
		int Num[5] = {};

		printf("\n Element Number 101 = %d.",Num[0]);
		printf("\n Element Number 201 = %d.",Num[1]);
		printf("\n Element Number 301 = %d.",Num[2]);
		printf("\n Element Number 401 = %d.",Num[3]);
		printf("\n Element Number 501 = %d.",Num[4]);

        getch();
        system("cls");

		printf("\n Enter 5 Array Elements => \n ");

		printf("\n Enter 1st Element : ");
		scanf("%d",&Num[0]);
		printf("\n Enter 2nd Element : ");
		scanf("%d",&Num[1]);
		printf("\n Enter 3rd Element : ");
		scanf("%d",&Num[2]);
		printf("\n Enter 4th Element : ");
		scanf("%d",&Num[3]);
		printf("\n Enter 5th Element : ");
		scanf("%d",&Num[4]);

        getch();
        system("cls");

		printf("\n Given Array Elements are => \n ");

		printf("\n Element 1001 = %d.",Num[0]);
		printf("\n Element 1002 = %d.",Num[1]);
		printf("\n Element 1003 = %d.",Num[2]);
		printf("\n Element 1004 = %d.",Num[3]);
		printf("\n Element 1005 = %d.",Num[4]);

        getch();
        return 0;
}
