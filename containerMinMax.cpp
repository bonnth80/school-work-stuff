// SortLargeFile.cpp
#include <iostream>
#include <list>
#include <map>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

template<typename eType, typename cType>
eType maxElement(cType& container) {

	eType x = *container.begin();

	for (auto p = container.begin() + 1; p != container.end(); p++)
		if (*p > x) x = *p;

	return x;
}


template<typename eType, typename cType>
eType minElement(cType& container) {

	eType x = *container.begin();

	for (auto p = container.begin() + 1; p != container.end(); p++)
		if (*p < x) x = *p;

	return x;
}


int main()
{
	vector<int> myVec;
	myVec.push_back(1);
	myVec.push_back(13);
	myVec.push_back(7);
	myVec.push_back(31);
	myVec.push_back(19);

	cout << "myVec max: " << maxElement<int>(myVec) << endl;
	cout << "myVec min: " << minElement<int>(myVec) << endl;

	cout << endl << endl;
	return 0;
}
