// Zadanie3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> urls;
    urls.push_back("http://mytona.com/index.html");
    urls.push_back("https://mytona.com:8080/");
    urls.push_back("yandex.ru:8080/index1.");
    urls.push_back("yandex.ru");

    std::string protocol = " ";
    std::string host = " ";
    std::string port = " ";
    std::string page = " ";
  
    int last = 0;
    
    for (int i = 0; i < urls.size() ;i++)
    {
        last = urls[i].find("://");

        if (last > -1)
        {
            protocol = urls[i].substr(0, last);
            urls[i].erase(0, last + 3);          
        }
        else
        {
            protocol = "http";          
        }

        last = urls[i].find(":");

        if (last > -1)
        {

            host = urls[i].substr(0, last);
            urls[i].erase(0, last);
        }
        else
        {
            last = urls[i].find("/");
            if (last > -1)
            {
                host = urls[i].substr(0, last);
                urls[i].erase(0, last);             
            }
            else
            {
                host = urls[i];                
            }
        }

        last = urls[i].find("/");

        if (last > -1)
        {
            port = urls[i].substr(0, last);
            urls[i].erase(0, last);          
        }
        else
        {
            port = "80";            
        }

        last = urls[i].find("/");

        if (last > -1)
        {
            page = urls[i].substr(last, urls[i].size());           
        }
        else
        {
            page = "/";            
        }

        std::cout << "Protocol: " << protocol << " " << "Host: " << host << " " << "Port: " << port << " " << "Page: " << page << std::endl;

    }
    return 0;
}


