#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

bool isPrime(int num) {

	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
}

int main()
{
	srand(time(NULL));

	int a[5];
	for (int i = 0; i < 5; i++)
	{
		a[i] = rand() % 100 + 1;
		//std::cout << a[i] << std::endl; 
	}

	for (int i = 0; i < 5; i++)
	{
		if (isPrime(a[i]))
		{
			std::cout << a[i] << " prim" << std::endl;
		}
		else
		{
			std::cout << a[i] << " nem prim" << std::endl;
		}
	}
}

