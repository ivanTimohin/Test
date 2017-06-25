#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "rus");
	char line[100], newline[100];
	int k=0, N=0, i, t=0;
	printf("¬ведите строку из которой необходимо скопировать n символов: ");
	scanf("%s", &line);
	printf("¬ведите длинну копируемой строки: ");
	scanf("%d", &k);
	printf("¬ведите номер позиции, начина€ с которой необходимо скопировать строку: ");
	scanf("%d", &N);
	N--;
	for (i = N; i < (N + k); i++)
	{
		newline[t] = line[i];
		t++;
	}
	newline[t] = 0;
	printf("—копированна€ строка = %s\n", newline);
}