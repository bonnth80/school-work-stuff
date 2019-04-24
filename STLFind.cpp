// SortLargeFile.cpp
#include <iostream>
#include <iomanip>
#include <iterator>
#include <algorithm>

using namespace std;

bool lessThan2(double val) {
	return val < 2 ? true : false;
}

int main()
{
	double array1[] = {2.4, 1.3, 2.4, 4.5, 9.0};

	cout << "\nFind 4.5 in array:\n\t";
	cout << find(array1, array1 + 5, 4.5) - array1;

	cout << "\nFind value < 2 in array:\n\t";
	cout << find_if(array1, array1 + 5, lessThan2) - array1;

	double array2[] = { 2.4, 4.5 };
	cout << "\nFind end of {2.4, 4.5} in array:\n\t";
	cout << find_end(array1, array1 + 5, array2, array2 + 2) - array1;

	double array3[] = { 34,55,2.4,4.5 };
	cout << "\nFind first of {34,55,2.4,4.5} in array:\n\t";
	cout << find_first_of(array1, array1 + 5, array3, array3 + 4) - array1;

	cout << endl << endl;
	return 0;
}
