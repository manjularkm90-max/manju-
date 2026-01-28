//power of a number
#include<stdio.h>
int main(){
    int m, b, result = 1;
    scanf("%d %d", &m, &b);
    for(int i = 0; i < b; i++){
        result *= m;
    }
    printf("%d", result);
    return 0;
}