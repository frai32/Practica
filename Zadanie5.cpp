

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Rus");
	int x[3];
	int y[3];

	double dotNumber;

	std::cout << "Введите координаты: "<< std::endl;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "x" << i + 1 << " ";
		std::cin >> x[i];

		std::cout << "y" << i + 1 << " ";
		std::cin >> y[i];
	}

	std::cout << "введите колличество точек х: ";
	std::cin >> dotNumber;
	
	if (dotNumber >= 1)
	{
		double dt = 1 / dotNumber;
		double t = -dt;

		for (int i = 0; i <= dotNumber; i++)
		{
			t += dt;

			double xb = (1 - t) * (1 - t) * x[0] + 2 * (1 - t) * t * x[1] + t * t * x[2];
			double yb = (1 - t) * (1 - t) * y[0] + 2 * (1 - t) * t * y[1] + t * t * y[2];
			std::cout << xb << "  " << yb << std::endl;
		}
	}
	else
	{
		std::cout << "колличество точек меньше либо равно 0";
	}


	return 0;
}


