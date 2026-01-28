//prime numbers
#include<stdio.h>
int main(){
    int n, count = 0;
    scanf("%d", &n);
    for(int i = 2; i <= n; i++){
        int Prime = 1;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                Prime = 0;
                break;
            }
        }
        if(Prime){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
