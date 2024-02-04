#include<stdio.h>
#include<conio.h>
void  Karad();

const  int  gNum = 505;                                                               /// Global Constant Variable

int main()
{
            const  int  Num = 100;                                                   ///  Local  Constant in main()

            int  P = Num - 50;

            printf("\n Value of Num = %d", Num);   // 100

            printf("\n Value of P = %d", P);       //50

            printf("\n Value of Global Variable gNum inside main() = %d", gNum);

            // gNum = gNum + 20;

            Karad();

            getch();
            return 0;
}

void  Karad()
{
                const int No = 1001;                                                      /// Local  Constant in Function Karad()

                printf("\n Value Of Local Const No is = %d", No);

                printf("\n Value of Global Variable gNum inside Karad() = %d", gNum);

                return;
}
