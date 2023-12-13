#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Prisoner
    {
        char name[50];
        int age;
        float year;
        char gender[10];
    }p1,p2;

int main()
{
    strcpy(p1.name, "Partha Chatterjee");
    p1.age = 69;
    p1.year = 10;
    strcpy(p1.gender, "Male");

    strcpy(p2.name, "Arpita Mukherjee");
    p2.age = 30;
    p2.year = 10;
    strcpy(p2.gender, "Female");

    printf("1st Prisoner: %s\n", p1.name);
    printf("His gender: %s\n", p1.gender);
    printf("His age: %d\n", p1.age);
    printf("His punishment duration: %.2f years\n", p1.year);

    printf("2nd Prisoner: %s\n", p2.name);
    printf("Her gender: %s\n", p2.gender);
    printf("Her age: %d\n", p2.age);
    printf("Her punishment duration: %.2f years\n", p2.year);

    return 0;
}
