//Ian Maze
//COP200.OM1
//Precentage Assignment

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int Males, Females; //Variables of males and females in class.
	float Total, PMales, PFemales; //Total + Variables for precentages of males and females.

	cout << "Percent of students by gender:\n\n";

	cout << "Please enter the number of females in class: "; 
	cin >> Females;
	cout << "Please enter the number of males in class: ";
	cin >> Males;

	Total = Females + Males;

	PFemales = float(Females / Total) * 100; //Caulculations for the percentage of females in class.
	PMales = float(Males / Total) * 100; //Caulculations for the percentage of males in class.

	cout << endl << fixed << setprecision(2); //double digit decimals for cout.
	cout << "The percentage of females in the class is " << PFemales << "%";

	cout << endl << fixed << setprecision(2);
	cout << "The percentage of males in the class is " << PMales << "%\n";

	return 0;
}