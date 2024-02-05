#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the 3 numbers ");
    scanf("%d %d %d",&a,&b,&c);

    switch(a>b?1:2){

        case 1:
        switch(a>c?1:2){

            case 1:
            printf("%d is the greatest ",a);
            break;

            case 2:
             printf("%d is the greatest ",c);
             break;
        }
        break;

        case 2:
         switch(b>c?1:2){

            case 1:
            printf("%d is the greatest ",b);
            break;

            case 2:
             printf("%d is the greatest ",c);
             break;

        }
        break;

    }
    return 0;
}