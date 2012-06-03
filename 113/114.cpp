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
	long long A = 0; 
	char B[1024];
    char C = 0;
while(1)
{
	C = 0;
	if((!scanf("%1023[^\n]%c",B,&C)) || C != '\n')
	{
		if(printf("enter the number!!!\n"))
		getchar();
	}
	else
		if(11 < strlen(B))
		{
		printf("very large number\n");
		}
		else
			if(!sscanf(B,"%d%c",&A,&C) || C != '\n')
			{
			printf("your number include the letters)))\n");
			}
			else 
				if(A > INT_MAX)
				{
				printf("enter the number less\n");
				}
				else
				return A;
}}
int main()
{
	cout << "int = " << sizeof(int) << " byte" <<endl;	
	cout << "enter the number from 0" << "  to  " << INT_MAX << " only unsigned number \n" <<endl;
	int n  = input(), count = 0, max = 0, a = 1;
while (n != 1)
{	
	cout << n << " ";
	cout << a << " number " <<endl;
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
		cout << endl << "steps = " << count << ' ' << "max = " << max << endl;
		cout << "enter any key" <<endl;
		getch();
return 0;
}