#include <iostream>
#include <string>

using namespace std;

int main() 
{
	int valuesArray[7] = { 100,50,10,5,25,30,35 };
	int total = 0;
	for (int i = 0; i < size(valuesArray); i++)
	{
		cout << valuesArray[i]<< endl;
		total = total + valuesArray[i];
	}

	cout << total<<endl;

	system("pause");
		return 0;
}


	
