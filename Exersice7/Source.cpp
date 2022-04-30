#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Введите количество иксов: ";
	int numberX = 0;
	cin >> numberX;
	float* arrayPtrZ = new float[numberX];
	float* arrayPtrB = new float[numberX];
	float* arrayPtrA = new float[numberX];
	float* arrayPtrBe = new float[numberX];

	for (int counter = 0; counter < numberX; counter++)
	{
		cout << "Введите значения Z, B, A, Betta для X" << (counter + 1) << ":\n";
		cout << "Z = ";
		cin >> arrayPtrZ[counter];
		cout << "B = ";
		cin >> arrayPtrB[counter];
		cout << "A = ";
		cin >> arrayPtrA[counter];
		cout << "Betta = ";
		cin >> arrayPtrBe[counter];
	}
	float x = 0, y = 0;
	for (int counter = 0; counter < numberX; counter++)
	{
		x = pow(arrayPtrZ[counter], 3) - arrayPtrB[counter] + pow(arrayPtrA[counter], 2) / pow(tan(arrayPtrBe[counter]), 2);
		y += x;
	}
	delete arrayPtrZ; delete arrayPtrB; delete arrayPtrA; delete arrayPtrBe;
	cout << "\ny = " << y << endl;
	system("pause");
	return 0;
}