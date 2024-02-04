//////////////////////////////////////////////
//
// 02 Array Structures Accept & Display Product Details
//
//////////////////////////////////////////////

#include<stdio.h>
#include<cstdlib>

struct Product
{
            int P_Id;
            char P_Name[10];
            float P_S_Price;
            float P_P_Price;
};

int main()
{
            struct Product P_Arr[3];

            // Accept Product details
            printf("\n\n Accepting Product Details => \n");

            //Loop To Accept Details
            for(int i = 0; i < 3; i++)
            {
                        if(i == 0)
                        {
                                        printf("\n Enter %dst Product ID = ",i+1);
                                        scanf("%d",&P_Arr[i].P_Id);
                                        printf("\n Enter %dst Product Name = ",i+1);
                                        scanf("%s",&P_Arr[i].P_Name);
                                        printf("\n Enter %dst Product Sales Price = ",i+1);
                                        scanf("%f",&P_Arr[i].P_S_Price);
                                        printf("\n Enter %dst Product Purchase Price = ",i+1);
                                        scanf("%f",&P_Arr[i].P_P_Price);
                        }
                        else if (i == 1)
                        {
                                        printf("\n Enter %dnd Product ID = ",i+1);
                                        scanf("%d",&P_Arr[i].P_Id);
                                        printf("\n Enter %dnd Product Name = ",i+1);
                                        scanf("%s",&P_Arr[i].P_Name);
                                        printf("\n Enter %dnd Product Sales Price = ",i+1);
                                        scanf("%f",&P_Arr[i].P_S_Price);
                                        printf("\n Enter %dnd Product Purchase Price = ",i+1);
                                        scanf("%f",&P_Arr[i].P_P_Price);
                        }
                        else if(i == 2)
                        {
                                        printf("\n Enter %drd Product ID = ",i+1);
                                        scanf("%d",&P_Arr[i].P_Id);
                                        printf("\n Enter %drd Product Name = ",i+1);
                                        scanf("%s",&P_Arr[i].P_Name);
                                        printf("\n Enter %drd Product Sales Price = ",i+1);
                                        scanf("%f",&P_Arr[i].P_S_Price);
                                        printf("\n Enter %drd Product Purchase Price = ",i+1);
                                        scanf("%f",&P_Arr[i].P_P_Price);
                        }
                        else
                        {
                                        printf("\n Enter %dth Product ID = ",i+1);
                                        scanf("%d",&P_Arr[i].P_Id);
                                        printf("\n Enter %dth Product Name = ",i+1);
                                        scanf("%s",&P_Arr[i].P_Name);
                                        printf("\n Enter %dth Product Sales Price = ",i+1);
                                        scanf("%f",&P_Arr[i].P_S_Price);
                                        printf("\n Enter %dth Product Purchase Price = ",i+1);
                                        scanf("%f",&P_Arr[i].P_P_Price);
                        }
            }


            system("cls");
            printf("\n\n===============***********=================\n");

            // Display Product details
            printf("\n Display Product Details =>\n");

            for(int i = 0; i < 3; i++)
            {
                        printf("\n %d Product Details => \n ID = %d. \n Name = %s. \n Sales Price = %0.2f. \n Purchase Price = %0.2f.\n",i+1, P_Arr[i].P_Id,P_Arr[i].P_Name,P_Arr[i].P_S_Price,P_Arr[i].P_P_Price);
            }

            printf("\n\n===============***********=================\n");

            return 0;
}
