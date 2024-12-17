#include <iostream>
#include <string>

using namespace std;

void main()
{
	int i, Grades[100], subjects, students, student, subject, i, j;
	string Subjects[100], Students[100];
	{
		cout << " Tell me how many students are in class \n ";
		cin >> students;
		cout << " Tell me how many subjects are in class \n ";
		cin >> subjects;
	}
	for (i = 0; i < students; i++)
	{
		cout << " Tell me the name " << i + 1 << " of the student \n ";
		cin >> Students[i];
	}
	for (i = 0; i < subjects; i++)
	{
		cout << " Tell me the name " << i + 1 << " of the subject \n ";
		cin >> Subjects[i];
	}
	for (i = 0; i < student; i++)
	{
		for (j = 0; j < subject; j++)
		{
		cout << " Tell me the grades of " << Students[i] << " at " << Subjects[j] << " \n ";
		cin >> Grades[i][j];
		}
	}
}