//////////////////////////////////////////////
//
// 03 Dynamic Structures(According To User Count Of Products) Accept & Display Product Details
//
//////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<cstdlib>
#include<stdlib.h>

static  int cnt = 0;

struct Product
{
    int P_Id;
    char P_Name[10];
    float P_S_Price;
    float P_P_Price;
};

void Creat_Stock(struct Product**);
void Accept_Products(struct Product*);
void Display_Products(struct Product*);
void Search_Products(struct Product*,int);

int main()
{
            struct Product *S_ptr = NULL;

            Creat_Stock(&S_ptr);

            Accept_Products(S_ptr);
            system("cls");

            Display_Products(S_ptr);

             getch();
             system("cls");

            Search_Products(S_ptr, 15);

            getch();
            free(S_ptr);

            return 0;
}

void Creat_Stock(struct Product **S_P_ptr)
{
            // Accept Count For Dynamic Memory Allocation
            printf("\n Enter How Many Product Details Do You Have = ");
            scanf("%d",&cnt);

            // Dynamic Memory Allocation
            *S_P_ptr = (struct Product*)malloc(cnt * sizeof(struct Product));
}

void Accept_Products(struct Product *SSptr)
{
                    // Accept Product details
                    printf("\n\n Accepting Product Details => \n");

                    //Loop To Accept Details
                    for(int i = 0; i < cnt; i++)
                    {
                                    printf("\n Enter %d Product ID = ",i+1);
                                    scanf("%d",&SSptr[i].P_Id);
                                    printf("\n Enter %d Product Name = ",i+1);
                                    scanf("%s",&SSptr[i].P_Name);
                                    printf("\n Enter %d Product Sales Price = ",i+1);
                                    scanf("%f",&SSptr[i].P_S_Price);
                                    printf("\n Enter %d Product Purchase Price = ",i+1);
                                    scanf("%f",&SSptr[i].P_P_Price);
                    }
}

void Display_Products(struct Product *SSptr)
{
                printf("\n\n===============***********=================\n");

                // Display Product details
                printf("\n Display Product Details =>\n");

                for(int i = 0; i < cnt; i++)
                {
                            printf("\n %d Product Details => \n ID = %d. \n Name = %s. \n Sales Price = %0.2f. \n Purchase Price = %0.2f.\n",i+1, SSptr[i].P_Id,SSptr[i].P_Name,SSptr[i].P_S_Price,SSptr[i].P_P_Price);
                }

                printf("\n\n===============***********=================\n");
}

void Search_Products(struct Product *SSptr, int P_ID)
{
                int i = 0;

                for( ; i < cnt; i++)
                {
                            if(P_ID == SSptr[i].P_Id)
                            {
                                    printf("\n Product Details are => \n ID = %d. \n Name = %s. \n Sales Price = %0.2f. \n Purchase Price = %0.2f.\n",i+1, SSptr[i].P_Id,SSptr[i].P_Name,SSptr[i].P_S_Price,SSptr[i].P_P_Price);
                                    break;
                            }
                }

                if(i == cnt)
                {
                                printf("\n Product with %d ID is not Available", P_ID);
                }

                return;
}
