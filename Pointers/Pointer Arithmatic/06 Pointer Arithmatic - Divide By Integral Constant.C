#include<stdio.h>
#include<conio.h>

int main()
{
            int Num[5] = {15,59,88,27,65};
            int  *Ptr = Num;

            printf("\n Base Address of Array is = %d", Num);     // 2686712
            printf("\n Value in Pointer is = %d", Ptr);      // 2686712
            printf("\n Value of Array Element Where Pointer Pointing = %d", *Ptr);  // 15

            getch();

            Ptr = Ptr / 5;               // Not Allowed

            //  Ptr = Ptr * 5      =>  Ptr / (sizeof(<DataTypeOf Ptr>) * 5);
            //                             =>   2686712 / (sizeof(int) * 5)
            //                             =>   2686712 / ( 4 * 5)
            //                             =>   2686712  / 20
            //                             =>  1343335.6                // it won't be valid memory address


            printf("\n\n New Value in Pointer is = %d", Ptr);     // 2686720
            printf("\n Value of Array Element Where Pointer Pointing = %d", *Ptr);   // 88

            getch();
            return 0;
}
