#include <stdio.h>
int i, tot;

int func() {
	for (i = 0; i < 11; i++)
		tot += i;
}

int main()
{
	func();
	printf("%d\n", tot);
}