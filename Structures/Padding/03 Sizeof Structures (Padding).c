#include<stdio.h>
#include<conio.h>

struct stud
{
        char b;
        char *Name[2];
        int s;
};

int main( )
{
            struct stud s ;


            printf("\n Sizeof Structure Object : %d",sizeof(s));

            getch();
            return 0;
}

