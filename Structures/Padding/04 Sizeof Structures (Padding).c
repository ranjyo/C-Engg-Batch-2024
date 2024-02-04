#include<stdio.h>
#include<conio.h>

struct Stud
{
        int R_No;
        char Nm[6];
        void *vptr;
};

int main( )
{
            printf("\n Sizeof Structure Object : %d",sizeof(struct Stud));

            getch();
            return 0;
}

