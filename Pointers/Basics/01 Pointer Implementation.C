#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo = 21, iNum = 55;
    int  *iPtr1 = &iNo;
    int  *iPtr2 = &iNo;

    printf("\n Value of iNo = %d", iNo);            /// 21
    printf("\n Address of iNo = %d",&iNo);          /// 748
    printf("\n Value of iNo Using its Pointer iPtr1 = %d",*iPtr1);  /// 21
    printf("\n Address Of iNo Using iPtr1 = %d", iPtr1);            /// 748
    printf("\n Address Of iPtr1 = %d",&iPtr1);                      /// 740

    printf("\n\n Value of iNum = %d", iNum);        /// 55
    printf("\n Address of iNum = %d",&iNum);        /// 744
    printf("\n Value of  Variable Using its Pointer iPtr2 = %d",*iPtr2);    /// 21
    printf("\n Address Of Variable Using iPtr2 = %d", iPtr2);               /// 748
    printf("\n Address Of iPtr2 = %d",&iPtr2);                              /// 736

    getch();
    return 0;
}
