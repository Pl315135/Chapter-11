#include <iostream>
using namespace std;

int main()
{
	int monthNumber;
	//get month number
	cout << "Enter the month number (-1 to stop): ";
	cin >> monthNumber;
	int days[12] = { 30,31,30,31,30,31,30,31,30,31,30,31 };
	while (monthNumber != -1)
	{
		
		//display number of days
		if (monthNumber > 0 && monthNumber < 13)
			cout << "Number of days: " << days[monthNumber - 1] << endl << endl;
		else
			cout << "Invalid month number" << endl << endl;
		//end if
		cout << "Enter the month number (-1 to stop): ";
		cin >> monthNumber;
	}  //end while

	   system("pause"); 
	return 0;
}