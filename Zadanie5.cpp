

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Rus");
	int x[3];
	int y[3];

	

	std::cout << "Введите координаты: "<< std::endl;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "x" << i + 1 << " ";
		std::cin >> x[i];

		std::cout << "y" << i + 1 << " ";
		std::cin >> y[i];
	}

	
	
	for (float t = 0; t <= 1; t += 0.05)
	{
		double oneMinusT = (1 - t);
		double xb = oneMinusT * oneMinusT * x[0] + 2 * oneMinusT * t * x[1] + t * t * x[2];
		double yb = oneMinusT * oneMinusT * y[0] + 2 * oneMinusT * t * y[1] + t * t * y[2];
		std::cout << xb << "  " << yb << std::endl;
	}

	
	


	return 0;
}


