#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("%s", c);
    return 0;
}