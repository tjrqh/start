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
	printf("\n 파일 입력후 출력 \n\n");
		struct library {
			int booknumber;
			char bookname[10];
			char booksummary[10];
			char isbn[10];
		};

	FILE* fp;
	fp = fopen("library.txt","w");
	fprintf(fp,"1 윤성우 c배우기 A-3-1\n");
	fprintf(fp,"2 윤성우2 c배우기 A-3-2\n");
	fprintf(fp,"3 윤성우3 c배우기 A-3-3\n");

	fclose(fp);


	struct library b[255];
	int j;

	fp = fopen("library.txt", "r");
	for (j = 0; j < 3; j++) {
		fscanf(fp, "%d %s %s %s",&b[j].booknumber, &b[j].bookname, &b[j].booksummary, &b[j].isbn);
	}
	fclose(fp);

	for (j = 0; j < 3; j++) {
		printf("%d %s %s %s\n",b[j].booknumber, b[j].bookname, b[j].booksummary, b[j].isbn);
	}
	

	


}