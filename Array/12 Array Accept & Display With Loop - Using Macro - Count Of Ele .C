#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5

int main()
{
		int Num[Size] = {}, i = 0, SrcEle = 0, Cnt = 0;

		printf("\n\n Enter %d Array Elements => \n ",Size);

        for(i = 0; i < Size; i++ )
        {
            printf("\n Enter %d Element : ", i+1);
            scanf("%d",&Num[i]);
        }

        getch();
        //system("cls");

        printf("\n Enter Element To be Searched in Array : ");
        scanf("%d",&SrcEle);

		for(i = 0; i < Size; i++)
        {
            if(Num[i] == SrcEle)
            {
                Cnt++;
            }
        }

        printf("\n Count Of Element %d in Array = %d.", SrcEle, Cnt);

        getch();
        return 0;
}
