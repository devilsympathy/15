#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	int arr[10]{ 5,3,5,6,2,3,2,5,6,11 }, minimalValue{ arr[0] }, maximumValue{ arr[0] };
	std::cout << "Массив: ";
	for (int i = 0; i <= 9; i++)
	{
		std::cout << arr[i] << " ";
		minimalValue = (minimalValue >= arr[i] ? arr[i] : minimalValue);
		maximumValue = (maximumValue <= arr[i] ? arr[i] : maximumValue);
	}
	std::cout << std::endl << "Минимальный элемент: " << minimalValue << std::endl;
	std::cout << "Максимальный элемент: " << maximumValue;
	return 0;
}
