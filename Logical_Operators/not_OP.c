#include <stdio.h>

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if(!(a > 0)) {
        printf("Number is not positive");
    } else {
        printf("Number is positive");
    }

    return 0;
}
