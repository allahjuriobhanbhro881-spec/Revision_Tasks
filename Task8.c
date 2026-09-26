#include <stdio.h>

int main() {
    int meal_category, customer_type;
    float bill_amount, service_chargeRate = 0.0, service_charge = 0.0;
    float discount_rate = 0.0, discount_amount = 0.0, final_amount = 0.0;

    
    printf("enter meal Category 1 = Fast Food, 2 = Desi Food, 3 = Chinese: ");
    scanf("%d", &meal_category);

    printf("enter bill amount in Rs: ");
    scanf("%f", &bill_amount);

    printf("enter customer type 1 = student 2 = Regular: ");
    scanf("%d", &customer_type);

    if (bill_amount < 0) {
        printf("invalid Selection\n");
        return 0;
    }

    
    switch (meal_category) {
        case 1:
            service_chargeRate = 0.05; 
            break;
        case 2:
            service_chargeRate = 0.08; 
            break;
        case 3:
            service_chargeRate = 0.10; 
            break;
        default:
            printf("invalid Selection\n");
            return 0;
    }

    if (bill_amount >= 1000.0) {
        if (customer_type == 1) {
            discount_rate = 0.15; 
        } else if (customer_type == 2) {
            discount_rate = 0.10;
        } else {
            printf("invalid Selection\n");
            return 0;
        }
    } else {
        if (customer_type == 1) {
            discount_rate = 0.05; 
        } else if (customer_type == 2) {
            discount_rate = 0.00; 
        } else {
            printf("invalid Selection\n");
            return 0;
        }
    }


    service_charge = bill_amount * service_chargeRate;
    discount_amount = bill_amount * discount_rate;
    final_amount = bill_amount + service_charge - discount_amount;

  
    printf("service Charge: Rs %.2f\n", service_charge);
    printf("discount:       Rs %.2f\n", discount_amount);
    printf("final Payable:  Rs %.2f\n", final_amount);

    return 0;
}