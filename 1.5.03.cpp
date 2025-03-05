#include <iostream>

int main() {
	setlocale(LC_ALL, "ru");
	const int rows{ 3 }, columns{ 6 };
	int arr[rows][columns] =
	{
		{1,2,3,4,5,6},
		{7,8,9,10,11,12},
		{13,14,15,16,17,18}
	};
	
	int minValue{ arr[0][0] };
	int maxValue{ arr[0][0] };
	int minRowIndex{ 0 }, maxRowIndex{ 0 };
	int minColumnIndex{ 0 }, maxColumnIndex{ 0 };

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr[i][j] < minValue)
			{
				minValue = arr[i][j];
				minRowIndex = i;
				minColumnIndex = j;
			}
			if (arr[i][j] > maxValue)
			{
				maxValue = arr[i][j];
				maxRowIndex = i;
				maxColumnIndex = j;
			}
		}
	}

	std::cout << "Массив: " << std::endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Индекс минимального элемента: " << minRowIndex << " " << minColumnIndex << std::endl;
	std::cout << "Индекс маскимального элемента: " << maxRowIndex << " " << maxColumnIndex << std::endl;
	return 0;
}
