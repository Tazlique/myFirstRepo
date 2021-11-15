#include<stdio.h>

int main(){
    
    int num, i=2;

    printf("Enter a number\n");
    scanf("%d", &num);

    while(i<=num){
        if(num%i != 0 || num == 2 || num == 1){
            printf("This is a prime number\n");
            break;
        }

        else{
            printf("this is not a prime number\n");
            break;
        }

    }
return 0;
}