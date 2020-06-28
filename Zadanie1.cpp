// Zadanie1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>


std::vector<std::string> splitStrings(std::string takeString, char splitChar)
{
	std::vector<std::string> splitStrings;
	size_t last_index = 0;

	//проходим всю строку...
	for (size_t i = 0; i < takeString.size(); i++)
	{
		//если находим разделитель...
		if (takeString[i] == splitChar)
		{	//записываем в вектор все символы от нулевого до i-того, и присваиваем нолевому i-тое значение...
			splitStrings.emplace_back(takeString.substr(last_index, i - last_index));
			last_index = i+1;
		}
	}

	// если разделитель больше не найден, то оставшиеся символы записываем в подстроку.
	splitStrings.emplace_back(takeString.substr(last_index, takeString.size() - last_index));

	return splitStrings;

}
	
	int main(int argc, char** argv)
	{
		setlocale(LC_ALL, "Rus");
		
		std::string allString = "_";
		std::cout << "Введите строку\n";
		std::getline(std::cin, allString);

		char s = ' ';
		std::cout << "введите разделитель\n";
		std::cin >> s;

		for (std::string el : splitStrings(allString, s))
		{
			std::cout << el <<"\n";
		}
		
		return 0;
	}


