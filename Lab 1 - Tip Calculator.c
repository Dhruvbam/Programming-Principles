#include <stdio.h>

int main()
{
    float bill, tip_percent, tip_per, bill_per;
    int person;
    
    printf("TIP CALCULATOR\n");
    printf("Enter the bill: ");
    scanf("%f", &bill);
    printf("Enter the percentage of the tip: ");
    scanf("%f", &tip_percent);
    printf("Enter the number of people: ");
    scanf("%d", &person);
    tip_per = ((tip_percent/100)*bill)/person;
    bill_per = (bill*(1+(tip_percent/100)))/person;
    printf("Tip per person is $%.2f and total per person is $%.2f", tip_per, bill_per);

    return 0;
}


