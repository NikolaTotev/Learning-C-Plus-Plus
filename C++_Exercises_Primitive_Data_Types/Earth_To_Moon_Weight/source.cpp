#include <iostream>
using namespace std;

int main()
{
	double earthWeight;
	double moonPercentage = 0.17;
	double moonWeight;

	cout << "Input your earth weight" << endl;
	cin >> earthWeight;
	moonWeight = earthWeight * moonPercentage;
	cout << "Your moon weight is: " << moonWeight << endl;
	
	return 0; 
}
