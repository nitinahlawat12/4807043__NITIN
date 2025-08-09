#include<stdio.h>
int main(){
    int x=5;
    int y=2;
    int s=5/2;
    printf("%d\n",s);

    //implicit conversion
    float f=9;
    printf("%f\n",f);
    int n=9.9;
    printf("%d\n",n);
    float sum =5/2;
    printf("%f\n", sum); 

    //explicit conversion
    float sum1= (float) 5 / 2;
    printf("%f", sum1); 

    int num1 = 5;
    int num2 = 2;
    float sum2 = (float) num1 / num2;
    printf("%f", sum2);




}