#include<stdio.h>
#include<conio.h>

struct Stud
{
    int RollNo;
    char Name[40];
    float Per;
};

int main( )
{
    printf("\n Size Of Integer is => %d.", sizeof(int));
    printf("\n Size Of Structure Student Object / Instance is => %d.", sizeof(struct Stud));

    getch();
    return 0;
}
