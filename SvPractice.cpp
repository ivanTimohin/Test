#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "rus");
	char line[100], newline[100];
	int k=0, N=0, i, t=0;
	printf("������� ������ �� ������� ���������� ����������� n ��������: ");
	scanf("%s", &line);
	printf("������� ������ ���������� ������: ");
	scanf("%d", &k);
	printf("������� ����� �������, ������� � ������� ���������� ����������� ������: ");
	scanf("%d", &N);
	N--;
	for (i = N; i < (N + k); i++)
	{
		newline[t] = line[i];
		t++;
	}
	newline[t] = 0;
	printf("������������� ������ = %s\n", newline);
}