//lab2.1

#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float h = 12.0;
	float g = 9.8;
	float t = sqrt(2 * h / g);

	printf("Предмет падает с высоты %f метров\n", h);
	printf("Он коснется земли через %f секунд\n", t);
}

//lab2.2

#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float h;
	printf("Введите высоту в метрах = ");
	scanf_s("%f", &h);

	float g = 9.8;
	float t = sqrt(2 * h / g);

	printf("Предмет падает с высоты %f метров\n", h);
	printf("Он коснется земли через %f секунд\n", t);
}

//lab2.3

#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float m;
	int rub_m;

	printf("Введите площадь квартиры = ");
	scanf_s("%f", &m);

	printf("Введите стоимость 1 квадратного метра RUB = ");
	scanf_s("%d", &rub_m);

	float price = m * rub_m;

	printf("Квартира площадью %f кв.м. по цене %d RUB стоит <%10.1f> RUB\n", m, rub_m, price);

}



//lab 2.4
#include <stdio.h>
#include<math.h>
#include <Windows.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float m;
	int rub_m;
	int zp;

	printf("Введите площадь квартиры ");
	scanf_s("%f", &m);

	printf("Введите стоимость 1 квадратного метра ");
	scanf_s("%d", &rub_m);

	printf("Введите размер зарплаты ");
	scanf_s("%d", &zp);

	float price = m * rub_m;
	int time = price / (zp / 2);

	printf("Квартира площадью %f кв.м. по цене %d RUB стоит <%10.1f> RUB\n", m, rub_m, price);
	printf("При зарплате %d RUB на эту квартиру нужно копить %i месяцев",zp,time);


}



//lab2.5

#include<stdio.h>
#include<math.h>
#include<Windows.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float m;
	float n;

	printf("Введите одну из сторон прямоугольника ");
	scanf_s("%f", &m);

	printf("Введите вторую сторону прямоугольника ");
	scanf_s("%f", &n);

	float s = n * m;
	float p = n + m;
	printf("Периметр прямоугольника %f на %f равен %1.2f, площадь равна %1.2f", m, n, p, s);
}


//lab2.6
#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float u;
	float r;

	printf("Введите значение напряжения ");
	scanf_s("%f", &u);

	printf("Введите значение сопротивления ");
	scanf_s("%f", &r);

	float i=u/r;

	printf("Закон Ома для участка цепи с напряжением %f и сопротивлением %f равно %1.3f",u,r,i);
}


//lab2.7

#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int sk;
	int zp;

	printf("Введите сумму кредита ");
	scanf_s("%i", &sk);

	printf("Введите размер зарплаты ");
	scanf_s("%i", &zp);

	float time = sk / (zp/2);

	printf("Кредит на сумму %i, при зарплате %i, можно выплатить за %1.1f месяцев", sk, zp, time);
