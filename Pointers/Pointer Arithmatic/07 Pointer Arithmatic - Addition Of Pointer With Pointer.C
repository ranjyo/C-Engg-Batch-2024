#include<stdio.h>
#include<conio.h>

int main()
{
            int No1 = 21, No2 = 50;

            int  *Res  = NULL;
            int  *Ptr1 = &No1;
            int  *Ptr2 = &No2;

            printf("\n Base Address of Variable 1st is = %d", &No1);     //
            printf("\n Base Address of Variable 2nd is = %d", &No2);     //

            printf("\n Value in Pointer1 is = %d", Ptr1);      //
            printf("\n Value in Pointer2 is = %d", Ptr2);      //

            printf("\n Value of  Variable to which Pointer Pointing = %d", *Ptr1);  // 21
            printf("\n Value of  Variable to which Pointer Pointing = %d", *Ptr2);  // 50

            getch();

            Res = Ptr1 + Ptr2;         // Not  Allowed as  =>  //  Res   =  2686740 + 2686736  =  5373476

            printf("\n\n Value of Pointer Variable Result is = %d.", Res);

            getch();
            return 0;
}
