#include<stdio.h>
#include<conio.h>

int Add(int, int);                    /// Forward Declaration

int main()
{
    int N1 = 0, N2 = 0, Res = 0;

    printf("\n Enter 1st Number : ");
    scanf("%d",&N1);
    printf("\n Enter 2nd Number : ");
    scanf("%d",&N2);

    Res = Add(N1, N2);                     /// Function Call

    printf("\n Addition of %d & %d is = %d.", N1, N2, Res);

    getch();
    return 0;
}

/// Helper Function

int Add(int Num1, int Num2)         /// Definition
{
    int Sum = 0;

    Sum = Num1 + Num2;

    return Sum;
}
