#include <stdio.h>

int main(){
    
    // the Water Tank Timer
    
    int tank_capacity,current_level;
    float fill_rate;
    printf("Enter tank capacity: ");
    scanf(" %d", &tank_capacity);
    printf("Enter current_level: ");
    scanf(" %d", &current_level);
    printf("Enter motor fill rate: ");
    scanf(" %f", &fill_rate);

    int required_water = tank_capacity - current_level;
    float required_time;
    float cost;
    int a = required_water;
    if(current_level >= tank_capacity){
        printf("tank already full: \n");
        printf("Stopped\n");
    }
    else{
     required_time = required_water/fill_rate;
     int intp = a/fill_rate;
     if((required_time - intp) == 0){
     cost = (required_time)*3.5;   
     }
    else{
     cost = (required_time + 1)*3.5;
     }
    }

    printf("Required Time %0.2f\n", required_time);
    printf("Cost %0.2f", cost);
    




    return 0;
}