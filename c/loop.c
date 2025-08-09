#include<stdio.h>
int main(){
    int i = 0;
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }
    i = 0;
    do {
        printf("%d\n", i);
        i++;
    }
    while (i < 5);

    for (i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
}