#include <stdio.h>
#include <string.h>

typedef struct
{
    int year;
    int number;
} student;

int main(void)
{
    student data;
    student *pdata;

    pdata = &data;

    pdata->year = 10;

    printf("%d\n", data.year);

    return 0;
}