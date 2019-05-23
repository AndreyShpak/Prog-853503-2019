//Вариант 9
//Меры длины. Разработать программу, меню которой позволяет
//выполнить следующие функции:
//• Ввод значения длины (километры, метры, сантиметры,
//миллиметры).
//• Перевод длины в русские традиционные единицы (версты,
//аршины, сажени, вершки)
//• Перевод длины в английские традиционные единицы (мили,
//ярды, футы, дюймы)
//• Вывод отчета, представляющего введенное значение в
//1)километрах, 2) метрах, 3) сантиметрах, 4) миллиметрах.
//• Информация о версии и авторе программы
//• Выход из программы.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int proverka(char* string)  // функция для проверки строки на наличие лишних символов
{
	int temp_point = 0; // êîëè÷åñòâî òî÷åê
	for (int i = 0; i < strlen(string); i++) {
		if ((string[i] > '9' || string[i] < '0') && (string[i] != '.'))
			return 0; // возвращаем нулевое значение , если обнаружен некорректный символ
		else if (string[i] == '.')
			temp_point++;
	}

	if (temp_point > 1) // если количество точек больше 1 или в числе присутствует и точка, и запятая- возвращаем 0
		return 0;
	else
		return 1;

}

void Menu() // функция по выводу главного меню на экран
{
	printf("--------------MENU--------------\n");
	printf("1) Enter the data\n");
	printf("2) Converted to Russian units\n");
	printf("3) Converted to English units\n");
	printf("4) Report in standard units\n");
	printf("5) Information about the version and author of the program\n");
	printf("6) Close the program\n");
}

void get_Report_about_units(double Mera) // функция по выводу числа в СИ
{
	printf("\nReport in standard units: ");
	printf("\n1) %lf kilometers", Mera / 1000);
	printf("\n2) %lf meters", Mera);
	printf("\n3) %lf santimeters", Mera * 100);
	printf("\n4) %lf milimeters\n", Mera * 1000);
}

void get_in_Russian_units(double Mera)// функция по выводу числа в русских измерениях
{
	printf("\nTranslation into Russian measures: ");
	printf("\n1) %lf vershkov", Mera / 0.04445);
	printf("\n2) %lf arshinov", Mera / (0.04445 * 16));
	printf("\n3) %lf sashen", Mera / (0.04445 * 16 * 3));
	printf("\n4) %lf verst\n", Mera / (0.04445 * 16 * 1500));
}

void get_in_English_units(double Mera)// функция по выводу числа в английских измерениях
{
	printf("\nTranslation into English measures: ");
	printf("\n1) %lf inches", Mera / 0.0254);
	printf("\n2) %lf foots", Mera / (0.0254 * 12));
	printf("\n3) %lf yards", Mera / (0.0254 * 12 * 3));
	printf("\n4) %lf miles\n", Mera / (0.0254 * 12 * 1760 * 3));
	printf("\nTranslation into Russian measures: ");
}

void unitsMenu() // фунция по выводу промежуточного меню на экран
{
	printf("In what units will you enter the data?\n");
	printf("1) kilometers\n");
	printf("2) centimeters\n");
	printf("3) meters\n");
	printf("4) millimeters\n");
}

char* enterstring(char* string) // функция по вводу безразмерной строки
{
	int size = 1, i = 0;
	rewind(stdin);// очищаем поток ввода
	while (1) {
		*(string + i) = getchar();
		if (*(string + i) == ',')     // еслии нажали enter, то элемент заменяется на ноль символ , ввод завершается
			* (string + i) = '.';
		if (*(string + i) == '\n') {
			*(string + i) = '\0';
			break;
		}
		size++;
		string = (char*)realloc(string, sizeof(char) * size); // переопределяем память
		i++;
	}
	return string;
}

int main() {
	double Mera = 0.0;
	int temp = 1;
	while (temp) {
		Menu();
		rewind(stdin);
		switch (getchar()) {

		case '1': {
				Mera = 1.0;
				int metka = 1;
				while (metka) { 
					unitsMenu();    // выбор единиц ввода
					rewind(stdin);
					switch (getchar()) {
					case '1':
						Mera *= 1000;
						metka = 0;
						break;
					case '2':
						Mera /= 100;
						metka = 0;
						break;
					case '3':
						metka = 0;
						break;
					case '4':
						Mera /= 1000;
						metka = 0;
						break;
					default:
						printf("\nTry again\n");
					}
				}

				printf("Enter the number : "); // ввод строки
				while (1) {
					rewind(stdin);
					char* string = NULL;
					string = (char*)malloc(sizeof(char) * 1);// выделяем начальную память
					string = enterstring(string);
					if (!proverka(string)) // проверка ввода
					{
						printf("ERROR, try again...");
						continue;
					}
					else {
						Mera *= atof(string); // перевод строки в число
						system("pause");
						break;
					} 
				}

				system("cls");
				break;
			}
		case '2': // вывод в русских единицах
			get_in_Russian_units(Mera);
			system("pause");
			system("cls");
			break;
		case '3': // вывод в английских единицах
			get_in_English_units(Mera);
			system("pause");
			system("cls");
			break;
		case '4': // вывод отчета в СИ
			get_Report_about_units(Mera);
			system("pause");
			system("cls");
			break;
		case '5': // вывод информации об авторе
			printf("Assignment completed student of group 853503 Sadovskaya Alina\n"
				);
			system("pause");
			system("cls");
			break;
		case '6':
			temp = 0;
			break; // завершение программы
		default:
			printf("\nTry again\n");
		}

	}
	return 0;
}
