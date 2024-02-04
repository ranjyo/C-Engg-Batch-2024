#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
            int RollNo;
            char Name[80];
            char City[20];
            float Per;
};

int main( )
{
            printf("\n Size Of Integer is => %d.", sizeof(int));
            printf("\n Size Of Structure Student Object / Instance is => %d.", sizeof(struct  student));

            getch();
            return 0;
}
