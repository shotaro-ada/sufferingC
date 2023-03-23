#include <stdio.h>
#include <string.h>

typedef struct
{
    int year;
    int clas;
    int number;
    char name[64];
    double stature;
    double weight;
} student;

int main(void)
{
    student data1;

    data1.year = 1;
    strcpy(data1.name, "ADACHI");

    printf("%d年生の%s\n", data1.year, data1.name);

    return 0;
}