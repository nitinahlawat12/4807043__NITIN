#include<stdio.h>
int main(){
    int n;//int size(2 or 4 bytes)
    printf("%zu\n",sizeof(n));
    float f;//float size(4bytes)
    printf("%zu\n",sizeof(f));
    char c;//double size(8bytes)
    printf("%zu\n",sizeof(c));
    double d;//char size(1bytes)
    printf("%zu\n",sizeof(d));

    int num=15;
    printf("%d\n",num);
    printf("%i\n",num);

    float fnum=5.99;//6-7 decimal digit
    printf("%f\n",fnum);
    printf("%F\n",fnum);

    char letter='D';
    printf("%c\n",letter);
    char name[]="Nitin";
    printf("%s\n",name);

    double dnum=7.00;//15 decimal digit
    printf("%lf\n",dnum);

    int x=5,y=6,z=7;
    printf("x = %d , y = %d , z = %d ",x,y,z);
    printf("\n");

    float f1=35e3;//35000
    printf("%f\n",f1);

    double d1=12E4;//120000;
    printf("%lf\n",d1);

    float myFloatNum = 3.5;
    printf("%f\n", myFloatNum);   // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f\n", myFloatNum);   // Only show 4 digits

    //constant
    const int number=10;
    printf("%d",number);

}