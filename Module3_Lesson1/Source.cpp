﻿#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include <conio.h>

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
#pragma region 1. Ââåñòè ñ êëàâèàòóðû äâà ÷èñëà. Îïðåäåëèòü, ÷òî áîëüøå, ñóììà êâàäðàòîâ èëè êâàäðàò ñóììû ýòèõ ÷èñåë. Îòâåò âûâåñòè â âèäå ñîîáùåíèÿ
		
		SetConsoleTextAttribute(hConsole, 11);

		int a, b;
		a = 1 + rand() % 1000;
		b = 1 + rand() % 1000;
		printf("a=%d, b=%d\n\n", a, b);

		if ((pow(a, 2) + pow(b, 2) > (pow((a + b), 2)) > b))
		{
			printf("ñóììà êâàäðàòîâ äâóõ ÷èñåë áîëüøå êâàäðàòà èõ ñóììû\n\n");
		}
		else
		{
			printf("êâàäðàò ñóììû äâóõ ÷èñåë áîëüøå èëè ðàâåí ñóììå èõ êâàäðàòîâ\n\n");
		}
#pragma endregion
	}
	else if (tn == 2)
	{
#pragma region 2.	Ðàññ÷èòàòü íàäáàâêó ê çàðïëàòå çà ñòàæ, åñëè ñòàæ îò 2 äî 5 ëåò, íàäáàâêà ñîñòàâëÿåò 2%,  åñëè ñòàæ îò 5 äî 10 ëåò - 5%. Ââåñòè ñ êëàâèàòóðû çàðïëàòó è ñòàæ, âûâåñòè íàäáàâêó è ñóììó ê âûïëàòå
		
		SetConsoleTextAttribute(hConsole, 12);
		int z, s, n, sum;
		scanf("%d %d", &z, &s);
		printf("z=%d, s=%d\n\n", z, s);

		if (s >= 2 && s < 5)
		{
			n = z * 2 / 100;
			sum = z + n;
			printf("íàäáàâêà: %d, ñóììà ê âûïëàòå: %d\n\n", n, sum);
		}
		else if (s >= 5 && s < 10)
		{
			n = z * 5 / 100;
			sum = z + n;
			printf("íàäáàâêà: %d, ñóììà ê âûïëàòå: %d\n\n", n, sum);
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
			printf("÷åòíîå\n\n");
		else if ((x - 3) % 10 == 0)
			printf("îêàí÷èâàåòñÿ íà 3\n\n");
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
		printf("ñóììà åæåìåñÿ÷íûõ âûïëàò ïî äåïîçèòó: %d\n\n", profit);
	}
	else if (tn == 6)
	{
		int a = -2000 + rand() % 4000;
		printf("%d ãîä\n\n", a);
		if (a % 4 == 0)
			printf("%d ãîä âèñîêîñíûé\n\n", a);
		else
			printf("%d ãîä íåâèñîêîñíûé\n\n", a);
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
			printf("íàäî ïîïðàâèòüñÿ\n\n");
		else if (ideal == v)
			printf("âåñ èäåàëüíûé\n\n");
		else if(ideal)
			printf("íàäî ïîõóäåòü\n\n");
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
	else if (tn == 12)
	{
		SetConsoleTextAttribute(hConsole, 13);

		int Op, T, TW, S;
		scanf("%d", &Op);

		T = 0 + rand() % 60;
		TW = 0 + rand() % 60;
		printf("Âðåìÿ ðàçãîâîðîâ â áóäíèå äíè ó ðàçíûõ îïåðàòîðîâ: %d\n\n", T);
		printf("Âðåìÿ ðàçãîâîðîâ â âûõîäíûå äíè ó ðàçíûõ îïåðàòîðîâ: %d\n\n", TW);

		switch (Op)
		{
		case 1:
			printf("ñòîèìîñòü ðàçãîâîðîâ ó ïåðâîãî îïåðàòîðà çà íåäåëþ: %d\n\n", S = 50 * T + 50 * TW*0.1);
			SetConsoleTextAttribute(hConsole, 15);
			break;
		case 2:
			printf("ñòîèìîñòü ðàçãîâîðîâ ó âòîðîãî îïåðàòîðà çà íåäåëþ: %d\n\n", S = 2.45 * T + 2.45 * TW*0.08);
			SetConsoleTextAttribute(hConsole, 15);
			break;
		case 3:
			printf("ñòîèìîñòü ðàçãîâîðîâ ó òðåòüåãî îïåðàòîðà çà íåäåëþ: %d\n\n", S = 3.55 * T + 3.55 * TW*0.12);
			SetConsoleTextAttribute(hConsole, 15);
			break;
		}
	}
	else if (tn == 13)
	{
		int card;
		char var;
		printf("ââåäèòå íîìåð òåìû îòêðûòêè:\t");
		scanf("%d", &card);
		printf("ââåäèòå ëèòåðó âàðèàíòà âíóòðè òåìû:\t");
		scanf("%c", &var);

		var = getche();

		switch (card)
		{
		case 1:
		{
			switch (var)
			{
			case 'a':
				printf("\n\nÍîâîãîäíèå, âàðèàíò à\n\n");
				break;
			case 'b':
				printf("\n\nÍîâîãîäíèå, âàðèàíò b\n\n");
				break;
			case 'c':
				printf("\n\nÍîâîãîäíèå, âàðèàíò c\n\n");
				break;
			default:
				printf("\n\nvariant does not exist\n\n");
			}
		}
			break;
		case 2:
		{
			switch (var)
			{
			case 'a':
				printf("\n\nÑ Äíåì Ðîæäåíèÿ, âàðèàíò à\n\n");
				break;
			case 'b':
				printf("\n\nÑ Äíåì Ðîæäåíèÿ, âàðèàíò b\n\n");
				break;
			case 'c':
				printf("\n\nÑ Äíåì Ðîæäåíèÿ, âàðèàíò c\n\n");
				break;
			default:
				printf("\n\nvariant does not exist\n\n");
			}
		}
			break;
		case 3:
		{
			switch (var)
			{
			case 'a':
				printf("\n\nÑ Äíåì Çàùèòíèêà Îòå÷åñòâà, âàðèàíò à\n\n");
				break;
			case 'b':
				printf("\n\nÑ Äíåì Çàùèòíèêà Îòå÷åñòâà, âàðèàíò b\n\n");
				break;
			case 'c':
				printf("\n\nÑ Äíåì Çàùèòíèêà Îòå÷åñòâà, âàðèàíò c\n\n");
				break;
			default:
				printf("\n\nvariant does not exist\n\n");
			}
		}
			break;
		default:
			printf("\n\nsuch a card number does not exist\n\n");
		}
	}
	goto start;
}
