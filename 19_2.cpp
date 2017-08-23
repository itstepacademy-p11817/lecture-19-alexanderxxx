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

	int summ = 0, min = 9999999, max = 0, count = 0;
	double sr = 0.0;

	for (int i = 0; i < 3; i++)
	{
		for (int i2 = 0; i2 < 4; i2++)
		{
			summ += m[i][i2];
			count++;
			if (m[i][i2] < min)
			{
				min = m[i][i2];
			}
			if (m[i][i2] > max)
			{
				max = m[i][i2];
			}
		}
	}

	std::cout << "summ= " << summ << '\n' << "sr= " << summ / count << '\n' << "min= " << min << '\n' << "max= " << max << '\n';

	system("pause");
	return 0;
}