#include<stdio.h>
int main(){
    int a,b;
    char o='o';
    printf("Enter the numbers :");
    scanf("%d %d",&a,&b);
    printf("Enter the operator");
    scanf("%c",&o);

    switch(o){

        case '+':
        printf("%d",a+b);
        break;

         case '-':
        printf("%d",a-b);
        break;

         case '*':
        printf("%d",a*b);
        break;

         case '/':
        printf("%d",a/b);
        break;

    }

    return 0;
}