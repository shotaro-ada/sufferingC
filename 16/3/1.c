#include <string.h>
#include <stdio.h>

typedef struct
{
	int year;
	int clas;
	int number;
	char name[64];
} student;

typedef struct
{
	int year;
	int tinko;
} unko;

int main(void)
{
	student data[10];

	data[1].year = 3;
	strcpy(data[1].name, "adachi");
	printf("%s", data[1].name);
	printf("
		return 0;
}
