#include<stdio.h>
int main()
{
    int customerorder,stock,credit;
    printf("Input customerorder");
    scanf("%d",&customerorder);
    printf("Input the stock");
    scanf("%d",&stock);
    printf("Input credit(1 for ok,0 for not ok):");
    scanf("%d",&credit);
    if(customerorder<=stock && credit==1){
        printf("order is processed.Suplying %d units",customerorder);
    }
    else if(credit==0){
        printf("order can't processed.Intimating the customerorder");
    }
    else if(credit==1 && stock < customerorder){
        printf("supplying %d units from stock\n",stock);
        printf("Ballence %d units will be shipped latter",customerorder-stock);
    }
    return 0;        
}