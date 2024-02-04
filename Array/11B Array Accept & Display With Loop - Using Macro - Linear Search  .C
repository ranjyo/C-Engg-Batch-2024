#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

int main()
{
		int Num[Size] = {}, i = 0, SrcEle = 0;

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
                break;
            }
        }

        if( i < Size )
        {
            printf("\n Given Element %d Found At Location = %d.", SrcEle,i+1);
        }
        else
        {
            printf("\n Given Element %d Not Found in Array.", SrcEle);
        }

        getch();
        return 0;
}
