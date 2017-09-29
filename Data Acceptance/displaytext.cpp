/*Displat Tetx
Priya Ramanathan, 9/27/2017 p-2

Assignment Name : Take in Data

Display Data, Accept User Response, Display Changed Data

*/

//Libraries
#include <iostream> //* gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> //* gives access to _kbhit() and _getch() for pause ()

//Namespaces
using namespace std;

//Functions()
void pause() {
	cout << "Press and key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

//Main
void main() {
	//Variables
	int Number_of_Candy;
	char choice_answer;
	//set bool to false and assuem they didn't choose 'A'
	bool answersMatcheds = false; // did they get the same answer as you on number 2
	double height;

	int calc_1, calc_2, calc_3, calc_4, calc_5; // hold int values for calculation

	//User Queries
	cout << "How much candy do you have \"Kids\" : ";
	cin >> Number_of_Candy;
	cout << "What answer did you choose on the survey for number 6 (a/b/c/d) : ";
	cin >> choice_answer;
	if (choice_answer == 'b' || choice_answer == 'B') {
		answersMatcheds = true; // only set to true if choice answer was 'b' or 'B'
	}
	cout << "How tall are you in feet : ";
	cin >> height;

	cout << "Give me 3 random whole numbers : " << "\n";
	cout << "Number 1 : ";
	cin >> calc_1;
	cout << "Number 2 : ";
	cin >> calc_2;
	cout << "Number 3 : ";
	cin >> calc_3;

	//After questions print out stored data
	cout << "I think you are correct, " << Number_of_Candy << " Dairy Milk Chocolate is the sweetest. \n";
	cout << boolalpha << "I think that is " << answersMatcheds << "for question 2." << endl; // ENDL different ways to go to newline
	cout << "so you are : " << height << '\n';// another new way

	// Do some calculations
	cout << calc_1 << " + " << calc_2 << " = " << calc_1 + calc_2 << endl;
	calc_3 = calc_1 + calc_2;
	cout << calc_1 << " * " << calc_3 << " = " << calc_2 << "\n";

	//pause
	pause();
}