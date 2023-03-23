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

void student_print(student data);

int main(void)
{
    student data;

    data.year = 3;
    data.clas = 4;
    data.number = 18;
    strcpy(data.name, "mario");
    data.stature = 168.2;
    data.weight = 72.4;

    student_print(data);

    return 0;
}

void student_print(student data)
{
    printf("%d\n", data.year);
    printf("%d\n", data.clas);
    printf("%d\n", data.number);
    printf("%s\n", data.name);
    printf("%f\n", data.stature);
    printf("%f\n", data.weight);

    return;
};