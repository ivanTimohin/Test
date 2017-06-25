#include <stdio.h>
#include <locale.h>
void StringCopy();
int main() {
	StringCopy();
}
void StringCopy()
{
	setlocale(LC_CTYPE, "rus");
	char line[100], newline[100];
	int k=0, N=0, i, t=0;
	printf("Введите строку из которой необходимо скопировать n символов: ");
	scanf("%s", &line);
	printf("Введите длинну копируемой строки: ");
	scanf("%d", &k);
	printf("Введите номер позиции, начиная с которой необходимо скопировать строку: ");
	scanf("%d", &N);
	N--;
	for (i = N; i < (N + k); i++)
	{
		newline[t] = line[i];
		t++;
	}
	newline[t] = 0;
	printf("Скопированная строка = %s\n", newline);
}
