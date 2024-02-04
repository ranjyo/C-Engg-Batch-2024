#include<stdio.h>
#include<conio.h>

int main( )
{
            int No = 15;

            int *iPtr = &No;
            void *vPtr = &No ;

            printf("\n Address of No : %d",&No);
            printf("\n Address of iPtr : %d",&iPtr);
            printf("\n Value In iPtr: %d",iPtr);
            printf("\n Value In No: %d",No);
            printf("\n Value In No by Pointer: %d",*iPtr);

            printf("\n Address of vPtr : %d",&vPtr);
            printf("\n Value In vPtr: %d",vPtr);
            //printf("\n Value of No by Void pointer: %d",*vPtr);

            getch();
            return 0;
}

