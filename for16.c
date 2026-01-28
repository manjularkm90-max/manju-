//strong number 
#include<stdio.h>
int factorial(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int n, sum = 0, temp, digit;
    scanf("%d", &n);
    temp = n;
    while(temp != 0){
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    if(sum == n){
        printf("%d", yes);
    } else {
        printf("%d", n0);
    }
    return 0;
}