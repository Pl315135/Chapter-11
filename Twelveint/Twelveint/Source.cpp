	#include <string>
	# include <iostream>
	#include <array>
	using namespace std;

	int main()
	{
		int twelveArray[12] = { 1,0,2,4,8,5,6,3,7,9,150,10 };
		int n = sizeof(twelveArray) / sizeof(twelveArray[0]);
		sort(twelveArray, twelveArray + n);
		
		cout << "Enter a number";
		for (int i = 0; i < sizeof(twelveArray); i = i + 1)
		{
			cout << twelveArray[i] << " ";
		}
		system("pause");
		return 0;


	}