#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
    const int size = 10;
    int arr[size] = { 10, 3, 4, 1, 8, 9, 7, 2, 6, 5 };
    bool swapped = false;

    std::cout << "Массив до сортировки: ";
    for (int i = 0; i < size; ++i) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    do {
        swapped = false;
        for (int i = size - 1; i > 0; i--) 
        {
            if (arr[i] < arr[i - 1]) 
            {
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
                swapped = true;
            }
        }   
    } while (swapped);

    std::cout << "Массив после сортировки: ";
    for (int i = 0; i < size; ++i) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
