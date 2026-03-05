#include <stdio.h>

struct student
{
    char name[50];
    float m1, m2, avg;
};

int main()
{
    struct student s[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

       
}