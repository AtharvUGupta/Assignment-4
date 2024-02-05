#include<stdio.h>
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int c=n%2;
    switch(c){
        case 0:
        printf("It is even");
        break;

        case 1:
        printf("It is odd");
        break;

    }

    return 0;
}