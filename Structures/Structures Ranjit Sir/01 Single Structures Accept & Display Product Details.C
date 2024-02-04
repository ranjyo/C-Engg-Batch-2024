//////////////////////////////////////////////
//
// 01 Single Structures Accept & Display
//
//////////////////////////////////////////////

#include<stdio.h>
#include<cstdlib>

struct Product
{
            int P_Id;
            char P_Name[20];
            float P_P_Price;
            float P_S_Price;
};

int main()
{
            struct Product Prod1, Prod2,Prod3;

            // Accept Product details
            printf("\n\n Accepting Product Details => \n");

            // 1st Product
            printf("\n Enter 1st Product ID = ");
            scanf("%d",&Prod1.P_Id);

            printf("\n Enter 1st Product Name = ");
            scanf("%s",&Prod1.P_Name);

            printf("\n Enter 1st Product Sales Price = ");
            scanf("%f",&Prod1.P_S_Price);

            printf("\n Enter 1st Product Purchase Price = ");
            scanf("%f",&Prod1.P_P_Price);

            // 2nd Product
            printf("\n Enter 2nd Product ID = ");
            scanf("%d",&Prod2.P_Id);

            printf("\n Enter 2nd Product Name = ");
            scanf("%s",&Prod2.P_Name);

            printf("\n Enter 2nd Product Sales Price = ");
            scanf("%f",&Prod2.P_S_Price);

            printf("\n Enter 2nd Product Purchase Price = ");
            scanf("%f",&Prod2.P_P_Price);

            system("cls");
            printf("===============***********=================\n");

            // Display Product details
            printf("\n Display Product Details =>\n");

            // 1st Product
            printf("\n 1st Product Details => \n ID = %d. \n Name = %s. \n Sales Price = %0.2f. \n Purchase Price = %0.2f.\n",Prod1.P_Id, Prod1.P_Name,Prod1.P_S_Price,Prod1.P_P_Price);

            // 2nd Product
            printf("\n 2nd Product Details => \n ID = %d. \n Name = %s. \n Sales Price = %0.2f. \n Purchase Price = %0.2f.\n",Prod2.P_Id,Prod2.P_Name,Prod2.P_S_Price,Prod2.P_P_Price);


            printf("\n===============***********=================\n");

            return 0;
}
