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
	ostream_iterator<double> out(cout, "  ");
	
	double array1[] = {2.4, 1.3, 2.4, 2.4, 4.5, 6.7, 4.5, 9.0};

	cout << "Unsorted array:\n\t";
	copy(array1, array1 + 8, out);

	sort(array1, array1 + 8);
	cout << "\nafter sort():\n\t";
	copy(array1, array1 + 8, out);

	cout << "\nSearch if 6.7 exists in array: \n\t";
	cout << binary_search(array1, array1 + 8, 6.7);

	cout << "\nSearch if 4.3 exists in array: \n\t";
	cout << binary_search(array1, array1 + 8, 4.3);

	cout << endl << endl;
	return 0;
}
