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

int main( )
{
    struct Stud Std1 = {65, "Amey Wagh", 75.956431};
    struct Stud Std2;
    struct Stud Std3;

    Std2.RNo = 55;
    strcpy(Std2.Name, "Raj Patil");
    Std2.Per = 55.546;

    printf("\n\n Enter 3rd Student Info ");

    printf("\n\n Enter Roll Number = ");
    scanf("%d",&Std3.RNo);

    fflush(stdin);

    printf("\n Enter Name = ");
    gets(Std3.Name);

    printf("\n Enter Percentage = ");
    scanf("%f", &Std3.Per);

    system("cls");

    printf("\n ================*******================\n");

    printf("\n\t Student Database \n");

    printf("\n\n 1st Student Info is => ");

    printf("\n Roll Number = %d.", Std1.RNo);
    printf("\n Name        = %s.", Std1.Name);
    printf("\n Percentage  = %0.2f.", Std1.Per);

    printf("\n\n 2nd Student Info is => ");

    printf("\n Roll Number = %d.", Std2.RNo);
    printf("\n Name        = %s.", Std2.Name);
    printf("\n Percentage  = %0.2f.", Std2.Per);

    printf("\n\n 3rd Student Info is => ");

    printf("\n Roll Number = %d.", Std3.RNo);
    printf("\n Name        = %s.", Std3.Name);
    printf("\n Percentage  = %0.2f.", Std3.Per);

    printf("\n\n ================*******================\n");

    getch();
    return 0;
}
