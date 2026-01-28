//armstrong number 1 to n
#include<stdio.h>
int main(){
    int n, digit, sum = 0, temp, original;
    scanf("%d", &n);
    original = n;
    temp = n;
    for(int i=0; temp != 0; i++){
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    if(sum == original){
        printf("yes");
    } else {
        printf("No");
    }
}
