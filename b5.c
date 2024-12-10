#include<stdio.h>

int main(){
    printf("nhap canh rong: ");
    float r;
    scanf("%f",&r);
    printf("nhap canh dai: ");
    float d;
    scanf("%f",&d);
    float perimeter = (r + d) * 2;
    float area = r * d;
    printf("chu vi la: %f(cm), dien tich la: %f(cm2)",perimeter,area);
return 0;
}