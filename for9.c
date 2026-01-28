//fibonocci series
#include<stdio.h>
int main(){
    int n, first = 0, second = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for(int i = 0; i < n; i++){
        if(i <= 1)
            next = i;
        else{
            temp =a+b ;
            a = b;
            b = temp;
        }
        printf("%d ", temp);
    }
    return 0;
}