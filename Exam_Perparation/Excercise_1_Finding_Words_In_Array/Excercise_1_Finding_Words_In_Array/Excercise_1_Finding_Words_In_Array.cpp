#include <iostream>
using namespace std;
int main()
{
	int arrayLength = 0;
	cout << "Input array length" << endl;
	cin >> arrayLength;

	char* myArr = new char[arrayLength];

	cout << "Input characters" << endl;

	cin.getline(myArr, arrayLength);

	for(int i = 0; i < arrayLength; i ++)
	{
		cout << myArr[i];
	}
	delete [] myArr;
}
