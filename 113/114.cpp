#include <string.h>
#include <limits.h>
#include "stdafx.h"
#include <iostream>
using namespace std;
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
 
int input()
{
	setlocale(0,"Rus");
    long long A = 0; 
	char B[1024];
    char C = 0;
while(1)
{
	C = 0;
	if((!scanf("%1023[^\n]%c",B,&C)) || C != '\n')
	{
		if(printf("Число то введи!!!\n"))
		getchar();
	}
	else
		if(11 < strlen(B))
		{
		printf("Число очень большое\n");
		}
		else
			if(!sscanf(B,"%d%c",&A,&C) || C != '\n')
			{
			printf("Ваше число содержит буквы)))\n");
			}
			else 
				if(A > INT_MAX)
				{
				printf("Введи число немного меньше\n");
				}
				else
				return A;
}}
int main()
{
	setlocale(0,"Rus");
	cout << "int = " << sizeof(int) << " байт" <<endl;	
	cout << "введите число в диапазоне от 0" << "  до  " << INT_MAX << " по условию числа только натуральные \n" <<endl;
	int n  = input(), count = 0, max = 0, a = 1;
while (n != 1)
{	
	cout << n << " ";
	cout << a << " значение " <<endl;
	if (!(n % 2))
	{
		n /= 2;
	}
	else
	{
		n *= 3;
		n += 1;
	}
	if (n > max)
	{
		max = n;
	}
		count++;
		a++;
}
		cout << endl << "Количество шагов = " << count << ' ' << "максимальное значение = " << max << endl;
		cout << "нажмите любую клавишу" <<endl;
		getch();
return 0;
}