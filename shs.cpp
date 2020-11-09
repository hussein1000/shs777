/*My name: Hussein Saleh Hussein
Class: 2nd
Department: Computer Engineering
*/

// header for definintion of output and input operations
// like cin and cout
#include <iostream>
#include <cstring>
// making everything under std namespace available without the prefix
using namespace std;
// declare grouped list of variables
struct student
// define objects that we are going to use for input and output
{
    char name[60];
    char dep[30];
    int id;
    float marks;
};
// telling our function to return some value at the end of execution
int main() 
{
    student s;
// requesing the user to input information
    cout << "Insert Information:\n" << endl;
    cout << "\nEnter Your Name: ";
    cin >> s.name;
    cout << "Your Section: ";
    cin >> s.dep;
    cout << "ID: ";
    cin >> s.id;
    cout << "Marks: ";
    cin >> s.marks;
//displaying the information for you
    cout << "\n" << endl;
    cout << "Name: " << s.name << endl;
// specifying block of code to execute if it is true
	if (strcmp(s.dep, "A") == 0) {
		cout << "Section: Control Engineering";
	}
// searching for user's specific input to view the following
	if (strcmp(s.dep, "T") == 0) {
		cout << "Section: Telecomunication Engineering";
	}
	if (strcmp(s.dep, "C") == 0) {
		cout << "Section: Computer Engineering";
	}
    cout << "\nID " << s.id << endl;
    if (s.marks < 100)
    cout << "Student grade: A";
    if (s.marks < 90)
    cout << "Student grade: B";
    if (s.marks < 80)
    cout << "Student grade: C";
    if (s.marks < 70)
    cout << "Student grade: D";
    if (s.marks < 60)
    cout << "Student grade: F";
// returning value of success to end the program
    return 0;
}
