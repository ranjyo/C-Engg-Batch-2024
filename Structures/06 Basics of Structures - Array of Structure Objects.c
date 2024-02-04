#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct Stud
{
    int RNo;
    char Name[20];
    float Per;
};

int main()
{
        int i = 0;
        struct Stud Std[3];

        for(i = 0; i < 3; i++)
        {
                printf("\n\n Enter Student No %d Details => ",i+1);

                printf("\n\n Enter Roll Number = ");
                scanf("%d",&Std[i].RNo);

                fflush(stdin);

                printf("\n Enter Name = ");
                gets(Std[i].Name);

                printf("\n Enter Percentage = ");
                scanf("%f", &Std[i].Per);
        }

        getch();
        system("cls");

        getch();
        printf("\n ================*******================\n");

        printf("\n\t Student Database \n");

        for(i = 0; i < 3; i++)
        {
                printf("\n\n %d Student Info is => ", i + 1);

                printf("\n Roll Number = %d.", Std[i].RNo);
                printf("\n Name        = %s.", Std[i].Name);
                printf("\n Percentage  = %0.2f.", Std[i].Per);
                getch();
        }

        printf("\n\n ================*******================\n");

        getch();
        return 0;
}
