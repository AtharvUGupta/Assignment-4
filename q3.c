#include<stdio.h>
int main(){
    int balance;
    int score;

    printf("Enter the credit score\n");
    scanf("%d",&score);

    printf("Enter the current balance\n");
    scanf("%d",& balance);
    switch(score<600?1:(score>600&&score<750)?2:3){

    case 1: 
     printf("The interest based on your score is %f",0.15*balance);
     break;
     

      case 2: 
     printf("The interest based on your score is %f",0.12*balance);
     break;

      case 3: 
     printf ("The interest based on your score is %f",0.10*balance);
     break;
     
     
     }

    
    return 0;

}