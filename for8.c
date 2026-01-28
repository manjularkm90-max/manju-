//count digits 1 to n
#include<stdio.h>
int main(){
    int n, count = 0;
    scanf("%d", &n);
    for(int i=n;n!=0;){
        n = n / 10;
        count++;
    }
    printf("%d", count);
}