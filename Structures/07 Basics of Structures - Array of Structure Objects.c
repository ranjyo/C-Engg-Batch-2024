#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

#define Cnt 24

struct Stud
{
    int RNo;
    char Name[20];
    float Per;
};

int main()
{
        int i = 0;
        struct Stud Std[Cnt];

        for(i = 0; i < Cnt; i++)
        {
                printf("\n\n Enter Student No %d Details => ", i+1);

                printf("\n\n Enter Roll Number = ");
                scanf("%d",&Std[i].RNo);

                fflush(stdin);

                printf("\n Enter Name = ");
                gets(Std[i].Name);

                printf("\n Enter Percentage = ");
                scanf("%f", &Std[i].Per);
        }

        _getch();
        system("cls");

        printf("\n ================*******================\n");

        printf("\n\t Student Database \n");

        for(i = 0; i < Cnt; i++)
        {
                if((i+1)%10 == 1 && (i+1) != 11 )
                {
                    printf("\n\n %dst Student Info is => ", i + 1);
                }
                else if((i+1)%10 == 2 && (i+1) != 12 )
                {
                    printf("\n\n %dnd Student Info is => ", i + 1);
                }
                else if((i+1)%10 == 3 && (i+1) != 13 )
                {
                    printf("\n\n %drd Student Info is => ", i + 1);
                }
                else
                {
                    printf("\n\n %dth Student Info is => ", i + 1);
                }

                printf("\n Roll Number = %d.", Std[i].RNo);
                printf("\n Name        = %s.", Std[i].Name);
                printf("\n Percentage  = %0.2f.", Std[i].Per);
        }

        printf("\n\n ================*******================\n");

        getch();
        return 0;
}
