//---------Lab1_Var8--------
#include <conio.h>
#include <stdio.h>

int main()
{
	int a,b;
	char s;

	for (;;)
	{
	 printf("Input your num:  ");
	 scanf("%d",&a);                      //���� �����

		if (a/1000<10 && a/1000>0)    //�������� �� 4-� ���������
		{
			b = a%100*100;
			a = (a/100) + b;
			printf("Your num :  %d",a);
			printf("\n\n-----------\nExit: press q\nTry again: any another key\n");

		 scanf("%s",&s);
		 if (s=='q') break;  //�������� �� ������� ������ �� ���������
		 system ("cls");

		}else
		{
			 printf("Smth is wrong!Try again!");
			 getch();
			 system ("cls");
		}
	}
	return 0;
}
