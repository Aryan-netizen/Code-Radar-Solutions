#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[20],b[20],c[20];
    scanf("%s %s %s",a,b,c);
    printf("Name: %s",a);
    printf("Age: %s",b);
    printf("Hobby: %s",c);
    return 0;
}