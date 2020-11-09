/*My name: Hussein Saleh Hussein
Class: 2nd
Department: Computer Engineering
*/

//header for definintion of output and input operations
// like cin and cout
#include <iostream>
#include <cstring>
// making everything under std namespace available without the prefix
using namespace std;
// define objects that we are going to use for input and output
struct student
// defining our variables
{
    char name[50];
    char dep[50];
    int roll;
    float marks;
} s[5];
// telling our function to return some value at the end of execution
int main() 
{
	cout << "Enter information: " << endl;
	// using for make  it so clear 
    for(int i = 0; i < 5; ++i)
    {
		cout << "\nEnter name: ";
		cin >> s[i].name;
		cout << "Enter section: ";
		cin >> s[i].dep;
		cout << "Enter University ID number: ";
		cin >> s[i].roll;
		cout << "Enter marks: ";
		cin >> s[i].marks;
	}
		// declared our inputs and outputs as you can see
		cout << "\nDisplaying Information: " << endl;
		for(int i = 0; i < 5; ++i)
		{
			cout << "\nName: " << s[i].name << endl;
			/* using if condition to return a specific character 
			* in a specific condition */
			if (strcmp(s[i].dep, "A") == 0) {
			cout << "Section: Control Engineering";
			}
			/* strcmp being used to track entered characters 
			* so that it meets if condition or not */
			if (strcmp(s[i].dep, "T") == 0) {
			cout << "Section: Telecomunication Engineering";
			}
			if (strcmp(s[i].dep, "C") == 0) {
			cout << "Section: Computer Engineering";
			}
			cout << "\nUniversity ID Number: " << s[i].roll << endl;
			// using if condition to bind entered marks with the grade
			if (s[i].marks >= 90 && s[i].marks <= 100) {
			cout << "Your Grade is A";
			}
			// using && to check a number between two ranges
			if (s[i].marks >= 80 && s[i].marks <= 89) {
			cout << "Your Grade is B";
			}
			if (s[i].marks >= 70 && s[i].marks <= 79) {
			cout << "Your Grade is C";
			}
			if (s[i].marks >= 60 && s[i].marks <= 69) {
			cout << "Your Grade is D";
			}
			if (s[i].marks >= 50 && s[i].marks <= 59) {
			cout << "Your Grade is F";
			}
		}
	/* returing zero means success, thus, program is terminated
	* but it can run without it, depending on your POV */
    return 0;
}
