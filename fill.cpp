// SortLargeFile.cpp
#include <iostream>
#include <iomanip>
#include <iterator>
#include <algorithm>

using namespace std;

template<typename T>
void printArr(T &a, int size) {

	for (int i = 0; i < size; i++) {
		cout << fixed << setprecision(2) << a[i] << " ";
	}
};

int main()
{
	ostream_iterator<int> output(cout, " ");

	cout << fixed << setprecision(2);

	double array1[] = { 1.3, 2.4 ,4.5, 6.7, 9.0 };
	cout << "contents of original array:\n\t";
	printArr(array1, 5);

	fill(array1, array1 + 3, 5.5);
	cout << "\narray after fill():\n\t";
	printArr(array1, 5);

	fill_n(array1, 4, 6.9);
	cout << "\narray after fill_n():\n\t";
	printArr(array1, 5);

	cout << endl << endl;
	return 0;
}
