#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
struct books {
	int number;
	char name[10];
	char summary[10];
	char casenumber[2];
	int raw;
	int column;
};

int main()
{
	struct books m[255];
	int i;
	FILE* f;
	f = fopen("book.txt", "r");
	for (i = 0; i < 3; i++) {
		fscanf(f, "%d %s %s %s %d %d", &m[i].number, &m[i].name, &m[i].summary, &m[i].casenumber, &m[i].raw, &m[i].column);
	}
	fclose(f);

	for (i = 0; i < 3; i++) {
		printf("%d %s %s %s %d %d\n", m[i].number, m[i].name, m[i].summary, m[i].casenumber, m[i].raw, m[i].column);
	}
	//printf("%d", m[2].column);
	

	struct library b1;
	library.b
	int i;
	FILE* fp;
	fp = fopen("library.txt", "w");
	fscanf("")
	
		
		
	

}