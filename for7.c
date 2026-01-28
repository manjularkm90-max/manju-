//reverse a number 1 to n
#include<stdio.h>
int main(){
    int n, rev = 0, digit;
    scanf("%d", &n);
    for(int i=n;n!=0;n=n/10){
        digit = n % 10;
        rev = (rev*10)+(n%10);
    }
    printf("%d", rev);
    return 0;
}