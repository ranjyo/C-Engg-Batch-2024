#include<stdio.h>
#include<cstdlib>
#include<conio.h>

struct Product
{
            int P_Id;
            char P_Name[20];
            float P_S_Price;
            float P_P_Price;
};

int main()
{
            int Cnt = 0;
            struct Product  *S_Ptr = NULL;

            printf("\n How Many Products Do You Want To Add => ");
            scanf("%d", &Cnt);

            S_Ptr = (struct Product*)malloc(Cnt * sizeof(struct Product));

            printf("\n\n Accepting Product Details => \n");

            for(int i = 0; i < Cnt; i++)
            {
                        printf("\n Enter %d Product ID = ",i+1);
                        scanf("%d",&S_Ptr[i].P_Id);
                        printf("\n Enter %d Product Name = ",i+1);
                        scanf("%s",&S_Ptr[i].P_Name);
                        printf("\n Enter %d Product Sales Price = ",i+1);
                        scanf("%f",&S_Ptr[i].P_S_Price);
                        printf("\n Enter %d Product Purchase Price = ",i+1);
                        scanf("%f",&S_Ptr[i].P_P_Price);
            }

            system("cls");
            printf("\n\n===============***********=================\n");

            // Display Product details
            printf("\n Display Product Details =>\n");

            for(int i = 0; i < 3; i++)
            {
                        printf("\n %d Product Details => \n ID = %d. \n Name = %s. \n Sales Price = %0.2f. \n Purchase Price = %0.2f.\n",i+1, S_Ptr[i].P_Id,S_Ptr[i].P_Name,S_Ptr[i].P_S_Price,S_Ptr[i].P_P_Price);
            }

            printf("\n\n===============***********=================\n");

            getch();
            return 0;
}
