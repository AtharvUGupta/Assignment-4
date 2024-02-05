#include<stdio.h>
#include<math.h>

int main(){
    int n;
   
    printf("Enter the three digit number\n");
    scanf("%d",&n);
     int a=n%10;
    int b=(n%100)/10;
    int c= n/100;

    int x=pow(a,3);
    int y=pow(b,3);
    int z=pow(c,3);
    switch((n>999||n<100)?1:2){

    case 1:
   
        printf("Incorrect input");
        break;


        case 2:

         switch(x+y+z==n?1:2){


        case 1:

         printf("Yes\n");
         break;

         case 2:

         printf("No\n");
         break;

    }

   
    }
    return 0;
    
}