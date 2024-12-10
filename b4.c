#include<stdio.h>

int main(){
    printf("nhap canh hinh vuong: ");
    float n;
    scanf("%f",&n);
    float perimeter = n * 4;
    float area = n * n;
    printf("chu vi la: %f(cm), dien tich la: %f(cm2)",perimeter,area);
return 0;
}