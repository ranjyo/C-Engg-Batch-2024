#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5

int main()
{
		int Num[Size] = {}, i = 0, Sum = 0;

		printf("\n\n Enter %d Array Elements => \n ",Size);

        for(i = 0; i < Size; i++ )
        {
            printf("\n Enter %d Element : ", i+1);
            scanf("%d",&Num[i]);

            Sum = Sum + Num[i];
        }

        getch();

        printf("\n Sum of Array => ");

        for(i = 0; i < Size; i++ )
        {
            printf(" %d + ", Num[i]);
        }

        printf("\b\b = %d.", Sum);

        getch();
        return 0;
}
