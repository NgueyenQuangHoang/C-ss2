#include<stdio.h>

int main(){
    printf("nhap canh rong: ");
    float r;
    scanf("%f",&r);
    printf("nhap canh dai: ");
    float d;
    scanf("%f",&d);
    float chu_vi = (r + d) * 2;
    float dien_tich = r * d;
    printf("chu vi la: %f(cm), dien tich la: %f(cm2)",chu_vi,dien_tich);
return 0;
}