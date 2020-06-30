#include <iostream>
#include <fstream>
#include <Windows.h>
#include <regex>
#include <string>

int main()
{
    setlocale(LC_ALL, "Rus");

    std::string test = "";
    std::string replace = "";

    //шаблон для поиска чисел и пробелов
    std::regex rx("([0-9\\s])");

    
    std::ifstream fin("input.txt");
    
    if (!fin.is_open())
    {
        std::cout << "Файла нет";
        fin.close();
    }
    else
    {
        char ch;        
        while (fin)
        {
            fin.get(ch);
            test += ch;
          
        }
        fin.close();
       
      
      
            test = std::regex_replace(test, rx, replace);
            std::cout << test;

            std::ofstream outfile("input.txt");

            if (!outfile.is_open())
            {
                std::cout << "Файла нет";
                outfile.close();
            }
            else
            {
                outfile << test;

            }
            outfile.close();
        
    
    } 
    return 0;
}

