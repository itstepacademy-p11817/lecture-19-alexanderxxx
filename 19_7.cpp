#include <iostream>
#include <cstdlib>
#include <utility>

void out(int m[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int i2 = 0; i2 < 10; i2++)
		{
			std::cout << m[i][i2] << " ";
			if (i2 == 9)
			{
				std::cout << '\n';
			}
		}
	}
	return;
}



int main()
{
	setlocale(0, "");

	int m[10][10], m1[10][10];
	int temp=0;

	for (int i = 0; i < 10; i++)
	{
		for (int i2 = 0; i2 < 10; i2++)
		{
			m[i][i2] = rand() % 10;
		}
	}

	out(m);
	std::cout << '\n';

	for (int i = 0; i < 10; i++)
	{
		for (int i2 = 0; i2 < 10; i2++)
		{

			m1[i][i2] = temp + m[i][i2];
			temp = m1[i][i2];
		}
	}

	out(m1);

	system("pause");
	return 0;
}