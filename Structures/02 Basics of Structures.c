#include<stdio.h>
#include<conio.h>

struct Stud
{
    int RNo;
    char Name[20];
    float Per;
};

int main( )
{
    struct Stud Std1;

    printf("\n Roll Number = %d.", Std1.RNo);
    printf("\n Name        = %s.", Std1.Name);
    printf("\n Percentage  = %f.", Std1.Per);

    getch();
    return 0;
}
