#include<stdio.h>
#include<conio.h>

struct stud
{
        char City[8];
        char Nm[12];
        int R_No;
        long int Mob_No;
        float Per;
};

int main( )
{
            struct stud std1;

            printf("\n Sizeof Structure Object : %d",sizeof(std1));

            getch();
            return 0;
}

