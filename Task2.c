#include <stdio.h>

int main(){
    
    // the Grocery Store Discount Slip:
    float total_bill;
    int mbrship;

    printf("Enter total bill: ");
    scanf(" %f", &total_bill);
    printf("are your membership?: ");
    scanf(" %d", &mbrship);

    float discount;
    if(total_bill < 500){
       discount = 0;
    }
    else if((total_bill > 500 && total_bill < 1999)){
        if(mbrship == 1){
        discount = (10*total_bill)/100;
        }
        else{
        discount = (5*total_bill)/100;    
        }
    }
    else if(total_bill >= 2000){
        if(mbrship == 1){
        discount = (15*total_bill)/100;
        }
        else{
        discount = (8*total_bill)/100;
        }
    }

    total_bill = total_bill - discount;

    printf("discount amount: %0.2f\n", discount);
    printf("total bill: %0.2f", total_bill);

    return 0;
}