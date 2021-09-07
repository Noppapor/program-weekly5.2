#include<stdio.h>
int main() {
	int x, i, j;
	scanf_s("%d", &x);
	for (i = 1; i <= x; i++) 
	{
		for (j = 1; j <= x; j++) 
		{
			if (j > i && j <= x) printf(" ");
			else printf("*");
		}
		printf("\n");
	}
}