#include<stdio.h>
int main(){
    int age;
    printf("Enter the age :\n");
    scanf("%d",&age);

    switch(age<5?1:(age>5&&age<12)?2:(age>13&&age<59)?3:4){


        case 1:
          printf("Entry is free ");
          break;

          case 2:
           printf("Ticket cost is 20 ");
           break;

           case 3:
           printf("Ticket cost is 50 ");
           break;

           case 4:
           printf("The ticket cost is %f",50*0.8);
           break;

    }


    return 0;
    
}