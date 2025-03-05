#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	int arr[10]{ 1,2,3,4,5,6,7,8,9,10 }, minimalValue{ arr[0] }, maximumValue{ arr[0] };
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
