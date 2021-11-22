#include<stdio.h>

int main(){
    int num, prime = 1,i=2;

    printf("Enter a number\n");
    scanf("%d", &num);

    while(i<num){
        if (num%i == 0){
            prime = 0;
            break;
        }

        i++;
    } 

    if(prime == 0){
        printf("This is not a prime number");
        
    }

    else{
        printf("This is a prime number");
        
    }
return 0;
}
