#include <stdio.h>

int main(){
    
    // riksha fare calculator:
    float dis;
    int hours;
    int hours_rate=0;
    float dis_rate=0;

    printf("Enter distance: ");
    scanf(" %f", &dis);
    printf("Enter time: ");
    scanf(" %d", &hours);

    if(dis <= 0){
        printf("invalid input\n");
        printf("program Stoped\n");
    } 
    else{
      if(dis > 1){
        dis_rate = dis*22;
        dis_rate = dis_rate - 22;
        dis_rate = dis_rate + 50;
      }
      else{
        dis_rate = 50;
      }

      if(hours < 6 || hours > 22){
        hours_rate = 40;
      }
    }

    float total_fare = dis_rate + hours_rate;
    printf(" Total Fare: %0.2f", total_fare);

    return 0;
}