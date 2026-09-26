#include <stdio.h>

int main(){
    
    // the Mobile Load Card Vendor:
    float mobile_load;
    int network_code;
    int status;
    float bonus;

    printf("Enter mobile load: ");
    scanf(" %f", &mobile_load);
    printf("Enter network code: \n1. Jazz\n2. Telenor\n3. Ufone");
    scanf(" %d", &network_code);
    printf("Enter network code: \n0. weekend\n1. weekday");
    scanf(" %d", &status);

    if(mobile_load == 100){
        printf("There is no bonus");
    }

    else if(mobile_load > 100 && mobile_load <= 499){
      if(status == 0){
        if(network_code != 3){
            bonus = (10*mobile_load)/100;
        }
        else{
            bonus = (5*mobile_load)/100;
        } 
      }
      else{
            bonus = (5*mobile_load)/100;
      }
    }

     else if(mobile_load >= 500 || network_code == 1 || status == 0){
            bonus = (20*mobile_load)/100;
     }

     else{
          bonus = (12*mobile_load)/100;
     }

      mobile_load = mobile_load + bonus;

      printf("\nBonus: %0.2f", bonus);
      printf("\nfinal mobile load %0.2f", mobile_load);

    

    
    
    

    return 0;
}