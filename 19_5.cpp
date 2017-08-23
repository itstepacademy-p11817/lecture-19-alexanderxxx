#include <iostream>
#include <cstdlib>
#include <utility>

int main()
{
	setlocale(0, "");
	int m1[5][5];
	char n;
	int count = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int i2 = 0; i2 < 5; i2++)
		{
			m1[i][i2] = rand() % 10;
		}
	}

	while (true)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int i2 = 0; i2 < 5; i2++)
			{
				std::cout << m1[i][i2] << " ";
				if (i2 == 4)
				{
					std::cout << '\n';
				}
			}
		}
		std::cout << '\n';

		std::cout << "направление(u/d/l/r): ";
		std::cin >> n;
		std::cout << "количество сдвигов: ";
		std::cin >> count;

		if (n == 'u')
		{
			while (count > 0)
			{
				for (int i = 0; i < 5; i++)
				{
					for (int i2 = 0; i2 < 5; i2++)
					{
						if (i == 4)
						{
							break;
						}
						std::swap(m1[i][i2], m1[i + 1][i2]);
					}
				}
				count--;
			}
		}

		if (n == 'd')
		{
			while (count > 0)
			{
				for (int i = 4; i > 0; i--)
				{
					for (int i2 = 4; i2 >= 0; i2--)
					{
						std::swap(m1[i][i2], m1[i - 1][i2]);
						if (i == 0)
						{
							break;
						}
					}
				}
				count--;
			}

		}



		if (n == 'l')
		{
			while (count > 0)
			{
				for (int i = 0; i < 5; i++)
				{
					for (int i2 = 0; i2 < 5; i2++)
					{
						if (i2 == 4)
						{
							break;
						}
						std::swap(m1[i][i2], m1[i][i2 + 1]);
					}
				}
				count--;
			}
		}



		if (n == 'r')
		{
			while (count > 0)
			{
				for (int i = 4; i >= 0; i--)
				{
					for (int i2 = 4; i2 >= 0; i2--)
					{
						if (i2 == 0)
						{
							break;
						}
						std::swap(m1[i][i2], m1[i][i2 - 1]);

					}
				}
				count--;
			}

		}


	}
	system("pause");
	return 0;
}