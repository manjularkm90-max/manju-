//even digits
#include<stdio.h>
int main(){
    int num, count = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0){
        digit = num % 10;
        if(digit % 2 == 0){
            count++;
        }
        num /= 10;
    }
    printf("%d", count);
    return 0;
}