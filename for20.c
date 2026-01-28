//binary to decimal 
#include<stdio.h>
int main(){
    int binary, decimal = 0, base = 1, digit;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    while(binary != 0){
        digit = binary % 10;
        decimal += digit * base;
        binary /= 10;
        base *= 2;
    }
    printf("%d", decimal);
    return 0;
}