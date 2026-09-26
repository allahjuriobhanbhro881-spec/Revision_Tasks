#include <stdio.h>

int main(){
    
    // the Library Fine Calculator
    int due_days,book_type,mbrship;
    float cost;
    printf("Enter over due days: ");
    scanf(" %d", &due_days);
    printf("Enter book type:\n1. Regular\n2. Reference\n 3. Rare");
    scanf(" %d", &book_type);
    printf("Membership:\n1. Yes\n0. No\n");
    scanf(" %d", &mbrship);

    if(book_type == 1){
      if(due_days <= 7){
       cost = due_days*5;
      }
      else{
       cost = due_days*10; 
      } 
    }
    else if(book_type == 2){
       cost =  due_days*15; 
    }
    else{
       cost = due_days*30; 
    }

    if(due_days > 10){
        printf("Banned from Borrowing\n");
    }
    
    float discount=0;
    if(mbrship == 1){
      if(book_type != 3){
        discount = (20*cost)/100;
        cost = cost - discount;
      }
    }


    printf("final fee: %f", cost);




    return 0;
}