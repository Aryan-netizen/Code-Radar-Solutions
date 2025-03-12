#include <stdio.h>

int main() {
    int num, complement;

    scanf("%d", &num);

    complement = ~num;
    
    // Print result
    printf("%d",complement);
    
    return 0;
}
