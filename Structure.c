#include<stdio.h>
    struct date
    {
        int dd;
        int mm;
        int yy;
    };
     struct product
    {
        int number;
        int price;
        struct date dt;
    };
    void main(){
        struct product p[5];
        int i;
        printf("\n Enter the details of 3 products\n");
        for(i=0;i<3;i++)
        {
            printf("\n PRODUCT %d DETAILS\n",i+1);
            printf("\n Enter the product number");
            scanf("%d",&p[i].number);
            printf("\n Enter the price of the product");
            scanf("%d",&p[i].price);
            printf("\n Enter the date of purchase in DD - MM -YY format \n");
            printf("\n Enter the day of purchase\n");
            scanf("%d",&p[i].dt.dd);
            printf("\n Enter the month of purchase");
            scanf("%d",&p[i].dt.mm);
            printf("\n Enter the year of purchase\n");
            scanf("%d",&p[i].dt.yy);
        }
        printf("\n PRODUCT DETAILS\n");
        printf("\n Number cost date\n");
        for(i=0;i<3;i++){
            printf("\n %d\t %d\t-%d-%d-%d\n",p[i].number,p[i].price,p[i].dt.dd,p[i].dt.mm,p[i].dt.yy);
        }
        
        }
        
    