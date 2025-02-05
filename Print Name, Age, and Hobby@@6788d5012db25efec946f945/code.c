#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[20],b[20],c[20];
    scanf("%s %s %s",a,b,c);
    print("Name: %s",a);
    print("Age: %s",b);
    print("Hobby: %s",c);
    return 0;
}