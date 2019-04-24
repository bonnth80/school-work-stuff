// SortLargeFile.cpp
#include <iostream>
#include <iomanip>
#include <iterator>
#include <algorithm>

using namespace std;

bool ifDiv5(int x) {
	return x % 5 == 0;
}

int main()
{
	ostream_iterator<int> output(cout, " ");
	int array1[] = { 1,2,3,4,4,5,6,7,7,7,8,9,10 };

	cout << "Array contents:\n\t";
	copy(array1, array1 + 13, output);

	replace(array1, array1 + 13, 7, 12);
	cout << "\n\nArray contents after replace(array1, array1 + 13, 7, 12):\n\t";
	copy(array1, array1 + 13, output);

	replace_if(array1, array1 + 13, ifDiv5, -1);
	cout << "\n\nAfter replacing all elements divisible by 5 with -1:\n\t";
	copy(array1, array1 + 13, output);

	cout << endl << endl;
	return 0;
}
