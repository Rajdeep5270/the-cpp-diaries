#include <iostream>
#include <cstdlib>

using namespace std;

main()
{
	int n;
	char grade;

	cout << "Enter Your Marks : ";
	cin >> n;

	if (n > 100)
		cout << "Invalid Marks" << endl;
	else if (n >= 90)
		grade = 'A';
	else if (n >= 80)
		grade = 'B';
	else if (n >= 70)
		grade = 'C';
	else if (n >= 60)
		grade = 'D';
	else if (n >= 50)
		grade = 'E';
	else if (n >= 40)
		grade = 'F';
	else
		cout << "You Are Failed." << endl;


	switch (grade)
	{
	case 'A':
		system("cls");
		cout << endl
			 << "Your Grade = " << grade << endl
			 << "Excellent" << endl;
		break;

	case 'B':
		system("cls");
		cout << "Your Grade = " << grade << endl
			 << "Well Done" << endl;
		break;

	case 'C':
		system("cls");
		cout << "Your Grade = " << grade << endl
			 << "Good Job" << endl;
		break;

	case 'D':
		system("cls");
		cout << "Your Grade = " << grade << endl
			 << "Passed" << endl;
		break;

	case 'E':
		system("cls");
		cout << "Your Grade - " << grade << endl
			 << "Just Passed! You Could Do Better" << endl;
		break;

	default:
		cout << "Invalid Choice" << endl;
	}

	if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' || grade == 'E')
	{
		cout << endl
			 << "Your Are Eligible for Next Level" << endl;
	}
	else
	{
		cout << endl
			 << "You Are Not Eligible" << endl;
	}
}