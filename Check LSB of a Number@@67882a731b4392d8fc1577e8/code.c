#include <stdio.h>

int main() {
    int num;
    
    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Check if LSB is set
    if (num & 1)
        printf("%d", num);
    else
        printf("%d", num);
    
    return 0;
}