//////////////////////////////////////////////
//
// 03 Dynamic Structures(According To User Count Of Products) Accept & Display Product Details
//
//////////////////////////////////////////////

#include<stdio.h>
#include<cstdlib>
#include<stdlib.h>

struct Product
{
    int P_Id;
    char P_Name[10];
    float P_S_Price;
    float P_P_Price;
};

int main()
{
    int cnt = 0;
    struct Product *S_P_ptr = NULL;

    // Accept Count For Dynamic Memory Allocation
    printf("\n Enter How Many Product Details Do You Have = ");
    scanf("%d",&cnt);

    // Dynamic Memory Allocation
    S_P_ptr = (struct Product*)malloc(cnt * sizeof(struct Product));

    // Accept Product details
    printf("\n\n Accepting Product Details => \n");

    //Loop To Accept Details
    for(int i = 0; i < cnt; i++)
    {
        printf("\n Enter %d Product ID = ",i+1);
        scanf("%d",&S_P_ptr[i].P_Id);
        printf("\n Enter %d Product Name = ",i+1);
        scanf("%s",&S_P_ptr[i].P_Name);
        printf("\n Enter %d Product Sales Price = ",i+1);
        scanf("%f",&S_P_ptr[i].P_S_Price);
        printf("\n Enter %d Product Purchase Price = ",i+1);
        scanf("%f",&S_P_ptr[i].P_P_Price);
    }

    system("cls");
    printf("\n\n===============***********=================\n");

    // Display Product details
    printf("\n Display Product Details =>\n");

    for(int i = 0; i < cnt; i++)
    {
        printf("\n %d Product Details => \n ID = %d. \n Name = %s. \n Sales Price = %0.2f. \n Purchase Price = %0.2f.\n",i+1, S_P_ptr[i].P_Id,S_P_ptr[i].P_Name,S_P_ptr[i].P_S_Price,S_P_ptr[i].P_P_Price);
    }

    printf("\n\n===============***********=================\n");
    free(S_P_ptr);

    return 0;
}
