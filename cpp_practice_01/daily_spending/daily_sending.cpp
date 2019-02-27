#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	int **days = new int *[7];

	for (int i = 0; i < 7; i++)
	{
		days[i] = new int[10];
	}

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			std::cout << i + 1 << ". nap, " << j + 1 << ". tetel: ";
			std::cin >> days[i][j];
		}
	}

	int sum = 0;

	for (int i = 0; i < 7; i++)
	{
		int temp = 0;

		for (int j = 0; j < 3; j++)
		{
			temp += days[i][j];
		}

		std::cout << i + 1 << ". napi koltes: " << temp << std::endl;
		sum += temp;
	}

	std::cout << "heti koltes: " << sum << std::endl;
}
