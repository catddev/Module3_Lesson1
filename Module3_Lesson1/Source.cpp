#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>

void main()

{

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	int tn = 0;

start:
	printf("task number:\t");
	scanf("%d", &tn);

	if (tn == 1)
	{
#pragma region 1. Ввести с клавиатуры два числа. Определить, что больше, сумма квадратов или квадрат суммы этих чисел. Ответ вывести в виде сообщения
		
		SetConsoleTextAttribute(hConsole, 11);

		int a, b;
		a = 1 + rand() % 1000;
		b = 1 + rand() % 1000;
		printf("a=%d, b=%d\n\n", a, b);

		if ((pow(a, 2) + pow(b, 2) > (pow((a + b), 2)) > b))
		{
			printf("сумма квадратов двух чисел больше квадрата их суммы\n\n");
		}
		else
		{
			printf("квадрат суммы двух чисел больше или равен сумме их квадратов\n\n");
		}
#pragma endregion
	}
	else if (tn == 2)
	{
#pragma region 2.	Рассчитать надбавку к зарплате за стаж, если стаж от 2 до 5 лет, надбавка составляет 2%,  если стаж от 5 до 10 лет - 5%. Ввести с клавиатуры зарплату и стаж, вывести надбавку и сумму к выплате
		
		SetConsoleTextAttribute(hConsole, 12);
		int z, s, n, sum;
		scanf("%d %d", &z, &s);
		printf("z=%d, s=%d\n\n", z, s);

		if (s >= 2 && s < 5)
		{
			n = z * 2 / 100;
			sum = z + n;
			printf("надбавка: %d, сумма к выплате: %d\n\n", n, sum);
		}
		else if (s >= 5 && s < 10)
		{
			n = z * 5 / 100;
			sum = z + n;
			printf("надбавка: %d, сумма к выплате: %d\n\n", n, sum);
		}
#pragma endregion
	}
	else if (tn == 3)
	{
		int x, y, z;
		x = -10 + rand() % 100;
		y = -10 + rand() % 100;
		z = -10 + rand() % 100;
		printf("x=%d y=%d z=%d\n\n", x, y, z);

		if (x > 0)
			x = pow(x, 2);
		if (y > 0)
			y = pow(y, 2);
		if (z > 0)
			z = pow(z, 2);
		else
			x = x; y = y, z = z;
		printf("x=%d y=%d z=%d\n\n", x, y, z);
	}
	else if (tn == 4)
	{
		int x = 1 + rand() % 1000;
		printf("%d\n\n", x);
		if (x % 2 == 0)
			printf("четное\n\n");
		else if ((x - 3) % 10 == 0)
			printf("оканчивается на 3\n\n");
	}
	else if (tn == 5)
	{
		int sum, time, profit;
		sum =10000 + rand() % 2000000;
		scanf("%d", &time);
		printf("sum=%d time=%d\n\n", sum, time);

		if (time >= 6 && time < 12)
			profit = sum * 6 / 100 / 12;
		else if (time >= 12)
			profit = sum * 8 / 100 / 12;
		printf("сумма ежемесячных выплат по депозиту: %d\n\n", profit);
	}
	else if (tn == 6)
	{
		int a = -2000 + rand() % 2000;
		printf("%d год\n\n", a);
		if (a % 4 == 0)
			printf("%d год високосный\n\n", a);
		else
			printf("%d год невисокосный\n\n", a);
	}
	else if (tn == 7)
	{
		int sum = 100 + rand() % 2000;
		printf("sum=%d\n\n", sum);
		int discounted;

		if (sum > 1000)
			printf("discounted=%d\n\n", discounted = sum * 0.9);
		else
			printf("no discount");
	}
	else if (tn == 8)
	{
		int r, v, ideal;
		r = 150 + rand() % 50;
		printf("r=%d\n\n", r);
		printf("v=");
		scanf("%d", &v);
		
		ideal = r - 100;
		if (ideal > v)
			printf("надо поправиться\n\n");
		else if (ideal == v)
			printf("вес идеальный\n\n");
		else if(ideal)
			printf("надо похудеть\n\n");
	}
	else if (tn == 9)
	{
		printf("2+2=?\n\n");
		printf("a) 4 \nb) 8\nc) 0\n");

		int a = 4, b = 8, c = 0, ans=0;

		scanf("%d", &ans);

		if (ans ==a)
			printf("right\n\n");
		else
			printf("right answer - %d\n\n", a);

		
	}
	else if (tn == 10)
	{
		int x, y, z, n=0;
		x = 0 + rand() % 9;
		y = 0 + rand() % 9;
		printf("x=%d y=%d\n\n", x, y);
		z = x*y;
		
		scanf("%d", &n);
		if (z == n)
			printf("right\n\n");
		else
			printf("right answer: %d\n\n");
	}
	else if (tn == 11)
	{
		int month;
		
		scanf("%d", &month);

		switch(month)
		{
		case 1:
		case 12:
		case 2:
			SetConsoleTextAttribute(hConsole, 3);
			printf("winter\n\n");
			SetConsoleTextAttribute(hConsole, 15);
		break;
		case 3:
		case 4:
		case 5:
			SetConsoleTextAttribute(hConsole, 2);
			printf("spring\n\n");
			SetConsoleTextAttribute(hConsole, 15);
		break;
		case 6:
		case 7:
		case 8:
			SetConsoleTextAttribute(hConsole, 6);
			printf("summer\n\n");
			SetConsoleTextAttribute(hConsole, 15);
		break;
		case 9:
		case 10:
		case 11:
			SetConsoleTextAttribute(hConsole, 4);
			printf("autumn\n\n");
			SetConsoleTextAttribute(hConsole, 15);
		break;
		default:
			printf("no option\n\n");
		}
	}
	//else if (tn == 12)
	//{
	//	SetConsoleTextAttribute(hConsole, 13);

	//	//float O1 = 50, O2 = 2.45, O3 = 3.55;
	//	//float W1 = O1*0.1, W2 = O2*0.08, W3 = O3*0.12;
	//	float O;
	//	int T1, T2, T3, TW1, TW2, TW3, W1, W2, W3;
	//	T1 = 0 + rand() % 60;
	//	T2 = 0 + rand() % 60;
	//	T3 = 0 + rand() % 60;
	//	TW1 = 0 + rand() % 60;
	//	TW2 = 0 + rand() % 60;
	//	TW3 = 0 + rand() % 60;
	//	printf("Время разговоров в будние дни у разных операторов: %d %d %d\n\n", T1, T2, T3);
	//	printf("Время разговоров в будние дни у разных операторов: %d %d %d\n\n", TW1, TW2, TW3);
	//	switch (O)
	//	{
	//	case 1:
	//	{

	//	}
	//	default:
	//		break;
	//	}


	//}
	goto start;

}
