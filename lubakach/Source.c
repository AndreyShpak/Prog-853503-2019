
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int m, m1, i = 0;//m-�����, m1-�����, i-������ �������
	int n;//�������� �������� �������
	int reshenie[20];
	printf("Napishi chislo m?\n");
	scanf_s("%d", &m);
	m1 = m;//����� ����� m
	for (int y = m; y > 0; y--)
	{
		_Bool proverka = true;
		m1 = y;
		while (m1)//������� � �������� ������� ����� � ������ � ������
		{
			reshenie[i] = (m1 & 1);
			m1 = m1 >> 1;
			if (reshenie[i] == 0)
				proverka = false;
			i++;
		}
		if (proverka)//�������� �� ���������� �������
		{
			printf("\n%d-", y);
			for (int l = 0; l < i; l++)
				printf("%d", reshenie[i]);
		}

		i = 0;

	}

	return 0;
}

