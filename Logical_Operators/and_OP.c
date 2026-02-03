#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a > 0 && b > 0) {
        printf("Both numbers are positive");
    } else {
        printf("One or both numbers are not positive");
    }

    return 0;
}
