#include<stdio.h>

int main(){
    printf("nhap canh hinh vuong: ");
    float n;
    scanf("%f",&n);
    float chu_vi = n * 4;
    float dien_tich = n * n;
    printf("chu vi la: %f(cm), dien tich la: %f(cm2)",chu_vi,dien_tich);
return 0;
}