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
		if(printf("����� �� �����!!!\n"))
		getchar();
	}
	else
		if(11 < strlen(B))
		{
		printf("����� ����� �������\n");
		}
		else
			if(!sscanf(B,"%d%c",&A,&C) || C != '\n')
			{
			printf("���� ����� �������� �����)))\n");
			}
			else 
				if(A > INT_MAX)
				{
				printf("����� ����� ������� ������\n");
				}
				else
				return A;
}}
int main()
{
	setlocale(0,"Rus");
	cout << "int = " << sizeof(int) << " ����" <<endl;	
	cout << "������� ����� � ��������� �� 0" << "  ��  " << INT_MAX << " �� ������� ����� ������ ����������� \n" <<endl;
	int n  = input(), count = 0, max = 0, a = 1;
while (n != 1)
{	
	cout << n << " ";
	cout << a << " �������� " <<endl;
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
		cout << endl << "���������� ����� = " << count << ' ' << "������������ �������� = " << max << endl;
		cout << "������� ����� �������" <<endl;
		getch();
return 0;
}