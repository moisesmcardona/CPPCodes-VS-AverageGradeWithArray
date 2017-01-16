#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int MAX_GRADE = 3;
	float grade[MAX_GRADE], average = 0.0 ;
	char letter;
	for (int i = 0; i < MAX_GRADE; i++)
	{
		cout << "Enter grade " << i + 1 << ": ";
		cin >> grade[i];
	}
	for (int i = 0; i < MAX_GRADE; i++)
	{
		average = average + grade[i];
	}
	average = average / MAX_GRADE;
	if (average >= 88)
		letter = 'A';
	else if (average >= 75)
		letter = 'B';
	else if (average >= 65)
		letter = 'C';
	else if (average >= 59)
		letter = 'D';
	else
		letter = 'F';
	cout << "The average grade is: " << setprecision(2) << fixed<< average << ' ' << letter << endl;
	system("pause");
}