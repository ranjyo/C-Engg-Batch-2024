#include<stdio.h>
#include<conio.h>

void Add(int, int);                    /// Forward Declaration

int main()
{
    int N1 = 0, N2 = 0;

    printf("\n Enter 1st Number : ");
    scanf("%d",&N1);
    printf("\n Enter 2nd Number : ");
    scanf("%d",&N2);

    Add(N1, N2);                     /// Function Call

    getch();
    return 0;
}

/// Helper Function

void Add(int Num1, int Num2)         /// Definition
{
    int Sum = 0;

    Sum = Num1 + Num2;

    printf("\n Addition of %d & %d is = %d.", Num1, Num2, Sum);

    return;
}
