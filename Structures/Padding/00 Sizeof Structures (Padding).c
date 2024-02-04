#include<stdio.h>
#include<conio.h>

struct stud
{
        char Nm[20];                    //  20
        char City[40];                  //  40
        int R_No;                       //  4
        float Per;                      //  4
        char Grade;                     //  1
};

int main()
{
        struct stud std;

        printf("\n Size of Structure Object : %d",sizeof(std));     //28

        getch();
        return 0;
}
