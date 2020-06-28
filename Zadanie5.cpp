#include <iostream>

//порядок точек важен
//первая - левый конец, вторая - опорная, третья - правы конец
int main()
{
	setlocale(LC_ALL, "Rus");
	int x[3];
	int y[3];

	

	std::cout << "Введите координаты: "<< std::endl;

	for (int i = 0; i < 3; i++)
	{		
		std::cin >> x[i];
		std::cin >> y[i];
	}

	/*for (float t = 0; t <= 1; t += 0.05)
	{
		double oneMinusT = (1 - t);
		double xb = oneMinusT * oneMinusT * x[0] + 2 * t * oneMinusT * x[1] + t * t * x[2];
		double yb = oneMinusT * oneMinusT * y[0] + 2 * t * oneMinusT * y[1] + t * t * y[2];
		std::cout << xb << "  " << yb << std::endl;
	}*/
	
	double p1 = x[2] - x[0];
	for (int i = x[0]; i <= x[2]; i++)
	{
		double p0 = i - x[0];
		double T = p0 / p1;

		double oneMinusT = (1 - T);
		double xb = oneMinusT * oneMinusT * x[0] + 2 * T * oneMinusT * x[1] + T * T * x[2];
		double yb = oneMinusT * oneMinusT * y[0] + 2 * T * oneMinusT * y[1] + T * T * y[2];
		std::cout << xb << "  " << yb << std::endl;
	}

	return 0;
}


