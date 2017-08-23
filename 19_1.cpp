#include <iostream>
#include <cstdlib>
#include <utility>

int main()
{
	setlocale(0, "");
	int m[3][4]{
		{ 3,5,6,7 },
		{ 12,1,1,1 },
		{ 0,7,12,1 } };

	int summ = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int i2 = 0; i2 < 4; i2++)
		{
			std::cout << m[i][i2] << " ";
			summ += m[i][i2];
			if (i2 == 3)
			{
				std::cout << " | " << m[i][i2] + m[i][i2 - 1] + m[i][i2 - 2] + m[i][i2 - 3] << '\n' << '\n';
			}

		}
	}
	std::cout << "---------------" << '\n';
	for (int i = 0; i < 4; i++)
	{
		std::cout << m[0][i] + m[1][i] + m[2][i] << " ";
		if (i == 3)
		{
			std::cout << " | ";
		}
	}
	std::cout << summ << '\n';
	system("pause");
	return 0;
}