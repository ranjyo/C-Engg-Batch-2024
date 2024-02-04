#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Stud
{
    int RNo;
    char Name[20];
    float Per;
};

int main( )
{
    struct Stud Std1 = {15, "Amey Wagh", 75.956431};
    struct Stud Std2;

    Std2.RNo = 55;
    strcpy(Std2.Name, "Raj Patil");
    Std2.Per = 55.546;

    printf("\n\n 1st Student Info is => ");

    printf("\n Roll Number = %d.", Std1.RNo);
    printf("\n Name        = %s.", Std1.Name);
    printf("\n Percentage  = %f.", Std1.Per);

    printf("\n\n 2nd Student Info is => ");

    printf("\n Roll Number = %d.", Std2.RNo);
    printf("\n Name        = %s.", Std2.Name);
    printf("\n Percentage  = %f.", Std2.Per);

    getch();
    return 0;
}
