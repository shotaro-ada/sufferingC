#include <stdio.h>
#include <string.h>

struct student
{
    int year;
    int clas;
    int number;
    char name[64];
    double stature;
    double weight;
};

int main(void)
{
    struct student data;

    data.year = 10;
    printf("%d\n", data.year);

    strcpy(data.name, "MARIO");
    printf("%s\n",data.name);

    return 0;
}