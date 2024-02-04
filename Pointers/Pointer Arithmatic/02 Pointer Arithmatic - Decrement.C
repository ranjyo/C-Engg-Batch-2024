#include<stdio.h>
#include<conio.h>

int main()
{
        int Num[5] = {15,59,88,27,65};
        int  *Ptr = &Num[3];

        printf("\n Base Address of Array is = %d", Num);     /// 2686712
        printf("\n Value in Pointer is = %d", Ptr);          /// 2686724
        printf("\n Value of Array Element Where Pointer Pointing = %d", *Ptr);  /// 27

        getch();

        Ptr--;

        ///  Ptr--  =>  Ptr - (sizeof(<DataTypeOf Ptr>) * 1);
        ///         =>   2686724 - (sizeof(int) * 1)
        ///         =>   2686724 - ( 4 * 1)
        ///         =>   2686724 - 4
        ///         =>   2686720

        printf("\n\n New Value in Pointer is = %d", Ptr);                        /// 2686720
        printf("\n Value of Array Element Where Pointer Pointing = %d", *Ptr);   /// 88

        getch();
        return 0;
}
