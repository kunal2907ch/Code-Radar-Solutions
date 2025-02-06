#include <stdio.h>

int a,b;

int main() {
    scanf("%d %d",&a,&b);
    if (a>0 & b<=0 || (a&&b==0)){
        printf("True");
    }
    else{
        printf("False");
    }
}