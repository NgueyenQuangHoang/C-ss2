#include<stdio.h>

int main(){
    int a; scanf("%d",&a);
    int b; scanf("%d",&b);
    int sum = a + b;
    int multi = a * b;
    float div = a / b;
    printf("%d\n%d\n%.2f", sum, multi, div);
return 0;
}