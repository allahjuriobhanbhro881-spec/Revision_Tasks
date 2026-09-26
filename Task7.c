#include <stdio.h>

int main(){
    
    // 
    float batting_avg;
    int m_played,fitness_status;

    printf("Enter batting avg: ");
    scanf(" %f", &batting_avg);
    printf("Enter match played: ");
    scanf(" %d", &m_played);
     printf("Enter fitness failure status: \n1. failed\n0. pass");
    scanf(" %f", &fitness_status);

    int selected = 0;
    if(m_played < 5){
      printf("Rejected - Insufficient Matches"); 
    }

   
    if(batting_avg >= 35 && m_played >= 10 && fitness_status != 0 && m_played > 5){
      selected = 1;
    }
    else if(batting_avg > 25 && batting_avg <= 34.99 && m_played >= 20 && fitness_status != 0 && m_played > 5){
      selected = 1;
    }
    else if(m_played > 5){
      selected = 1;
    }

    if(selected == 1){
        printf("\nselected\n");
    }
    else{
         printf("\nNot Selected\n");
    }

    return 0;
}