//palindrom number 
#include<stdio.h>
int main(){
    int n, reversed = 0, original, digit;
    scanf("%d", &n);
    original = n;
    for(; n != 0; n /= 10){
        digit = n % 10;
        reversed = reversed * 10 + digit;
    }
    if(original == reversed){
        printf("Palindrome");
    } else {
        printf("Not a palindrome");
    }
}