#include<stdio.h>
#include<conio.h>

int main()
{
            int Num[5] = {15,59,88,27,65};
            int  *Ptr = &Num[4];

            printf("\n Base Address of Array is = %d", Num);     // 2686712
            printf("\n Value in Pointer is = %d", Ptr);      // 2686728
            printf("\n Value of Array Element Where Pointer Pointing = %d", *Ptr);  // 65

            getch();

            Ptr = Ptr - 2;

            //  Ptr = Ptr - 2  =>  Ptr - (sizeof(<DataTypeOf Ptr>) * 2);
            //                          =>   2686728 - (sizeof(int) * 2)
            //                          =>   2686728 - ( 4 * 2)
            //                          =>   2686728 - 8
            //                          =>  2686720


            printf("\n\n New Value in Pointer is = %d", Ptr);     // 2686720
            printf("\n Value of Array Element Where Pointer Pointing = %d", *Ptr);   // 88

            getch();
            return 0;
}
