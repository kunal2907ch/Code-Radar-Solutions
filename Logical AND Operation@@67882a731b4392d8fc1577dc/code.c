#include <stdio.h>

int a,b;

int main() {
    scanf("%d %d",&a,&b);
    if (a&b>0){
        printf("True");
    }
    else{
        printf("False");
    }
}