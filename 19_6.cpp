#include <iostream>
#include <cstdlib>
#include <utility>


void sort(int m1[])
{
	for (int f = 0; f < 10; f++)
	{
		int p = 0;
		for (int i = 0; i < 9; ++i)
		{
			if (m1[i] >(m1[i + 1] - 1))
			{
				std::swap(m1[i], m1[i + 1]);
				p++;
			}
		}
		if (p == 0)
		{
			break;
		}
	}
	return;
}





int main()
{
	setlocale(0, "");

	int m[10][10], m1[10];

	for (int i = 0; i < 10; i++)
	{
		for (int i2 = 0; i2 < 10; i2++)
		{
			m[i][i2] = rand() % 10;
		}
	}



	





	for (int i = 0; i < 10; i++)
	{
		for (int i2 = 0; i2 < 10; i2++)
		{
			m1[i2] = m[i2][i];
		}
		sort(m1);
		for (int i2 = 0; i2 < 10; i2++)
		{
			m[i2][i] =m1[i2];
		}
	}



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




	system("pause");
	return 0;
}