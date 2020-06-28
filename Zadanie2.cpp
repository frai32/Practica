// Zadanie2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <time.h>
#include <math.h>
#include <algorithm>


//функция заполняетт рандомными числами массив с заданным размером
void fillArray(int *array, int length)
{
    for (int i = 0; i < length;++i)
    {
        array[i] = 1 + rand() % 1000;
        
    }

 
}

//Функция выводит на экран массив.
void showArray(int *array, int length, std::string arrayName)
{
        for (int i = 0; i < length;++i)
        {

            std::cout <<"\n"<<arrayName << i+1 <<": "<<array[i];
        }

        std::cout <<"\n";
}

//считает средние геометрическое
void srGeom(int* array, int size)
{
    long double res = 1;
    for (int i = 0; i < size; i++)
    {
        res *= array[i];
    }

    
    long double sGeo = pow(res, (double)size);

    std::cout << sGeo;

}

int main()
{
    setlocale(LC_ALL, "Rus");

    srand(time(NULL));
    int lengtA = 1 + rand() % 100 ;
    int lengtB = 1 + rand() % 100;
    int lengtC = lengtA + lengtB;
    
  
   std::cout << lengtA<<"\n";
   std::cout << lengtB<<"\n";
   std::cout << lengtC<<"\n";
    
    int *A = new int[lengtA];
    int *B = new int[lengtB];
    int *C = new int[lengtC];
    
     //заполняю рандомными числами массивы
     fillArray(A, lengtA);
     fillArray(B, lengtB);


    showArray(A, lengtA, "A array");
    showArray(B, lengtB, "B array");
   

    //пытаюсь объединить 2 массива в один
    for (int i = 0; i < lengtA; i++)
    {
        C[i] = A[i];
    }
    for (int i = lengtA; i < lengtC; i++)
    {
        C[i] = B[i-lengtA];
    }
 
    showArray(C, lengtC, "C array");

    
    std::sort(C, C + lengtC);
    showArray(C, lengtC, "sort C array");

    std::cout << "Минимальное значение: " << C[0]<<"\n";

    std::cout << "Максимальное значение: " << C[lengtC - 1] << "\n";

    srGeom(C, lengtC);

    delete[] A;
    delete[] B;
    delete[] C;
}

