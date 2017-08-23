#include <iostream>
#include <cstdlib>
#include <utility>

int main()
{
	setlocale(0, "");
	int m1[5][10], m2[5][5];

	for (int i = 0; i < 5; i++)
	{
		for (int i2 = 0; i2 < 10; i2++)
		{
			m1[i][i2] = rand() % 50;
		}
	}


	for (int i = 0; i < 5; i++)
	{
		for (int i2 = 0; i2 < 5; i2++)
		{
			m2[i][i2] = m1[i][i2 * 2] + ((m1[i][i2 * 2]) + 1);
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int i2 = 0; i2 < 5; i2++)
		{
			std::cout << m2[i][i2] << " ";
			if (i2 == 4)
			{
				std::cout << '\n';
			}
		}
	}
	std::cout << '\n';
	system("pause");
	return 0;
}