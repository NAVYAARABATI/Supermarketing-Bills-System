#include<stdio.h>
#define MAX 100
//supermarkeet billing system//

struct item
{
    char item[100];
    int quantity;
    float price;
    float totalcost;
};
struct item items[MAX];
int main()
{
    int no_of_items,i;
    float sum=0;
    char name[100];
    printf("enter the customer name:");
    fgets(name,sizeof(name),stdin);
    printf("DATE:%s\n",__DATE__);
    printf("TIME:%s\n",__TIME__);
    printf("how many different items the customer need:");
    scanf("%d",&no_of_items);
    for(i=0;i<no_of_items;i++)
    {
        printf("the name of the item:");
        scanf("%s",items[i].item);
        printf("enter the quantity of the item:");
        scanf("%d",&items[i].quantity);
        printf("enter the price of each item:");
        scanf("%f",&items[i].price);
         items[i].totalcost = items[i].quantity * items[i].price;
        printf("the totalcost of each item is %.2f\n",items[i].totalcost);
        sum+=items[i].totalcost;
    }
    float subtotal,tax,discount,final_amount;
    subtotal=sum;
    printf("enter the tax:");
    scanf("%f",&tax);
    printf("enter the discount:");
    scanf("%f",&discount);
    final_amount=subtotal + tax-discount;
    printf("--supermarket--\n");
    printf("customer is %s",name);
    printf("date:%s\n",__DATE__);
    printf("time:%s\n",__TIME__);
    printf("\n%-20s %-10s %-10s %-10s\n","ITEM","QUANTITY","PRICE","TOTAL");
    for(i=0;i<no_of_items;i++)
    {
        printf("%-20s %-10d %-10.2f %-10.2f\n", items[i].item, items[i].quantity, items[i].price, items[i].totalcost);
    }
    printf("subtotal is %.2f\n",subtotal);
    printf("tax is %.2f\n",tax);
    printf("discount is %.2f\n",discount);
    printf("final amount is %.2f\n",final_amount);
    printf("--THANK YOU--\n");
    return 0;
}



