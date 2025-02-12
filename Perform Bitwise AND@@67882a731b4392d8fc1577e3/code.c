#include <stdio.h>

int a,b;

int main() {
    scanf("%d %d",&a,&b);
    int result = a & b;
    printf("%d\n",result);
}