#include<stdio.h>
#include<conio.h>

struct stud1
{
            char Nm[7];                     //   7
            char City[9];                   //   9
            int R_No;                       //   4
            long int Mob_No;                //   4
            float Per;                      //   4
};

struct stud2
{
            int R_No;                       //   4
            char Nm[7];                     //   7
            long int Mob_No;                //   4
            char City[9];                   //   9
            float Per;                      //   4
};

struct stud3
{
            char Nm[7];                     //   7
            int R_No;                       //   4
            char City[9];                   //   9
            long int Mob_No;                //   4
            float Per;                      //   4
};

int main( )
{
            struct stud1 std1;
            struct stud2 std2;
            struct stud3 std3;

            printf("\n Size of  1st Structure Object : %d",sizeof(std1));     //
            printf("\n Size of  2nd Structure Object : %d",sizeof(std2));     //
            printf("\n Size of  3rd Structure Object : %d",sizeof(std3));     //

            getch();
            return 0;
}
