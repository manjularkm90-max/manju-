//prime number check
#include<stdio.h>
int main(){
    int n, Prime = 1;
    scanf("%d", &n);
    for(int i = 2; i <= n / 2; i++){
        if(n % i == 0){
            Prime = 0;
            break;
        }
    }
    if(Prime && n > 1){
        printf("prime");
    } else {
        printf("Not prime");
    }
    return 0;
}