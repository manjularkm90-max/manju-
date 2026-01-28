
//sum of digits
#include<stdio.h>
int main(){
    int num, sum = 0, digit;
    scanf("%d", &num);
    for(int i = num; i != 0; i /= 10){
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}