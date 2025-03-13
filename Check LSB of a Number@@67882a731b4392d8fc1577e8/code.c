#include <stdio.h>

int main() {
    int num;
    
    // Input from user

    scanf("%d", &num);
    
    // Check if LSB is set
    if (num & 1)
        printf("Set");
    else
        printf("Not Set");
    
    return 0;
}