#include<stdio.h>
#include<conio.h>

int Add(void);                    /// Forward Declaration

int main()
{
    int Res = 0;

    Res = Add();                         /// Function Call

    printf("\n Addition is = %d.", Res);

    getch();
    return 0;
}

/// Helper Function

int Add()                         /// Definition
{
    int N1 = 0, N2 = 0, Sum = 0;

    printf("\n Enter 1st Number : ");
    scanf("%d",&N1);
    printf("\n Enter 2nd Number : ");
    scanf("%d",&N2);

    Sum = N1 + N2;

    return Sum;
}
