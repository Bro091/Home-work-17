#include <iostream>
#include <cstdlib>
#include <ctime>


double mean(double num1, double num2) {
	return (num1 + num2) / 2;
}
double mean_arr(int arr1[], int length) {
	double mean= 0;
	for (int i = 0; i < length; i++)
		mean += arr1[i];
	return mean / length;
}


void powers(int num1, int num2) {
	int i = 0;
	do {
		std::cout << pow(num1, i) << std::endl;
		i++;
	} while (num2 >= i);
	
} 

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n, m;

	// Задача 1.
	/*std::cout << "Задача #1\n";
	std::cout << "Введите два числа -> ";
	std::cin >> n >> m;
	std::cout << mean(n, m) << "\n\n";



	//Задача 2
	std::cout << "Задача #2\n";
	const int size = 7;
	int arr[size]{ 112, -63, 3, -6, 5, 9, 85 };
	std::cout << "Ср. арифметическое всех элементов: \n";
	std::cout << mean_arr(arr, size) << "\n\n";*/
	
	//Задача 3
	std::cout << "Задача #3\n";
	std::cout << "Введите два числа -> ";
	std::cin >> n >> m;
	powers(n, m);




return 0;


}