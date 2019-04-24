// SortLargeFile.cpp
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int f1(int value) {
	return 2 * value;
}

int main()
{
	int values[] = { 1,2,3,4,5 };
	fill_n(values + 2, 2, 9);

	ostream_iterator<int> output(cout, " ");

	cout << "values: ";
	copy(values, values + 5, output);

	cout << endl;
	return 0;
}
