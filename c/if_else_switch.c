#include<stdio.h>
int main(){
    int a=4,b=3,c=7;
    if(a>b && a>c){
        printf("a largest");
    }else if(b>a && b>c){
        printf("b largest");
    }else{
        printf("c largest");
    }
    printf("\n");

    //short hand if else
    int time=22;
    (time<18)?printf("good day"):printf("good evening");
    printf("\n");

    //switch
    int day = 4;
    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
    }

}