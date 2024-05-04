//Задание 3.1

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	const double width = 0.8;	//Ширина полотна
	double x, size;				//Переменные длинны и размера ткани
	double b, per1sq;			//Переменные общей стоимости и стоимости за кв. метр

	//Ввод необходимых значений пользователем
	printf("Длинна ткани: ");	scanf("%lf", &x);
	printf("Стоимость: ");		scanf("%lf", &b);

	size = x * width; //Считаем размер полотна
	per1sq = b / size; //Считаем ответ
	printf("Стоимость одного квадратного метра ткани: %.3lf\n", per1sq); //Вывод расчётов

	return 0;
}
