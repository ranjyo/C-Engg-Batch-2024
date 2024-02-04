#include<stdio.h>
#include<conio.h>

void SWAP(int, int);

int main()
{
    int N1 = 0, N2 = 0;

    printf("\n Enter 1st Number : ");
    scanf("%d",&N1);
    printf("\n Enter 2nd Number : ");
    scanf("%d",&N2);

    printf("\n After Swapping No1 = %d.\t No2 = %d.", N1, N2);
    getch();

    SWAP(N1, N2);

    printf("\n After Swapping No1 = %d.\t No2 = %d.", N1, N2);

    getch();
    return 0;
}

void SWAP(int Num1, int Num2)
{
    int Temp = 0;

    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;

    return;
}
