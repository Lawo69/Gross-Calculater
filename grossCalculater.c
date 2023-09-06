// gross total calculater
#include <stdio.h>

// calculate discount
int discountAmount(int grossTotal){
    int discount;
    if(grossTotal<=3000){
        discount=grossTotal/100*5;
        grossTotal=grossTotal-discount;
    }
    else if (grossTotal<=6000)
    {
        discount=grossTotal/100*10;
        grossTotal=grossTotal-discount;
    }
    else{
        discount=grossTotal/100*15;
        grossTotal=grossTotal-discount;
    }
    printf("\n___________________________________________________\n");
    printf("\nDiscount Amount : Rs.%d",discount);
    return grossTotal;
}

// get details customer name and date
int detail(){
    char name[20];
    printf("\nCustomer Name : ");
    gets(name);
    

    int dd,mm,yy;
    printf("Date (yy/mm/dd) : ");
    scanf("%d/%d/%d",&yy,&mm,&dd);
}

int main(){
    int itemPrice, quantity, amount, grossTotal=0;
    
    printf("\n                Gross Total Calculater");
    printf("\n___________________________________________________\n");
    detail();
    printf("\nIf you want stop enter price value -99\n");

    int i=1;
    while(i>0){

        printf("\nEnter Item Price : Rs.");
        scanf("%d",&itemPrice);
        if (itemPrice == -99)
        break;

        printf("Enter Quantity : ");
        scanf("%d",&quantity);

        // calculating gross total
        if(itemPrice>0 && quantity>0){
            amount = itemPrice * quantity;
            grossTotal = grossTotal + amount;
        }else{
            printf("\nEnter correct value. Thank you!\n");

        }
        i=i+1;
    }

    printf("\nGross Total with discount : Rs.%d\n",discountAmount(grossTotal));
    printf("Number of deferent items : %d",i-1);
    printf("\n___________________________________________________\n");
    return 0;
}