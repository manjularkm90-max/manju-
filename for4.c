//multiplication table 1 t0 n
#include<stdio.h>
int main(){
    int n;
    int pro;
    scanf("%d", &n);
    for(int i = 1; i <= 10; i++){
        pro=n*i;
        printf("%d",pro);
    }
}