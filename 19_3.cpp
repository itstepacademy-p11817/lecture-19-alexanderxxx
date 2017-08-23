#include <iostream>
#include <cstdlib>
#include <utility>

int main()
{
	setlocale(0, "");
	int m1[3][4]{
		{ 3,5,6,7 },
		{ 12,1,1,1 },
		{ 0,7,12,1 } };
	int m2[3][4]{
		{ 1,6,2,4 },
		{ 9,2,3,1 },
		{ 0,4,5,2 } };
	int m3[3][4];


	for (int i = 0; i < 3; i++)
	{
		for (int i2 = 0; i2 < 4; i2++)
		{
			m3[i][i2] = m1[i][i2] * m2[i][i2];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int i2 = 0; i2 < 4; i2++)
		{
			std::cout << m3[i][i2] << " ";
			if (i2 == 3)
			{
				std::cout << '\n';
			}
		}
	}
	std::cout << '\n';
	system("pause");
	return 0;
}