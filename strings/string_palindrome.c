#include <stdio.h>
#include <string.h>

int main() {

    char str[100], rev[100];
    int i, length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for(i = 0; i < length; i++)
    {
        rev[i] = str[length - 1 - i];
    }

    
}