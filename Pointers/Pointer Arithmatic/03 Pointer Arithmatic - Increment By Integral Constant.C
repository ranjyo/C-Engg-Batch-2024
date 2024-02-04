#include<stdio.h>
#include<conio.h>

int main()
{
    int Num[5] = {15,59,88,27,65};
    int  *Ptr = Num;

    printf("\n Base Address of Array is = %d", Num);     // 2686712
    printf("\n Value in Pointer is = %d", Ptr);          // 2686712
    printf("\n Value of Array Element Where Pointer Pointing = %d", *Ptr);  // 15

    getch();

    Ptr = Ptr + 3;

    ///  Ptr =      Ptr + 3      =>  Ptr + ( sizeof(<DataTypeOf Ptr>) * 3 );
    ///                          =>   2686712 + ( sizeof(int) * 3 )
    ///                          =>   2686712 + ( 4 * 3 )
    ///                          =>   2686712 +    12
    ///                          =>   2686724

    printf("\n\n New Value in Pointer is = %d", Ptr);     // 2686724
    printf("\n Value of Array Element Where Pointer Pointing = %d", *Ptr);   // 27

    getch();
    return 0;
}
