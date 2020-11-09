/*My name: Hussein Saleh Hussein
Class: 2nd
Department: Computer Engineering
*/

// header for definintion of output and input operations
// like cin and cout
#include <iostream>
#include <string>
// making everything under std namespace available without the prefix
using namespace std;
// declare grouped list of variables
int main()
// define objects that we are going to use for input and output
{
	int id, sec, grade;
	string name, name2, speciality, con;
	int i=1;
// execute statement once before checking the statement
// then evaluate the statement
	do {
		i=i+1;
		// user input code so that info can be stored and viewed
		cout<<"- Enter Your First Name: ";
		cin>>name;
		cout<<"- Enter Your Second Name: ";
		cin>>name2;
		cout<<"- Enter Your Department: ";
		cin>>speciality;
		cout<<"- Enter Your University ID: ";
		cin>>id;
		cout<<"- Enter Your Class: ";
		cin>>sec;
		cout << "- Enter Your Grade: ";
		cin >> grade;
		
		cout<<"\n- Your Name: "<<name<<" "<<name2<<"\n";
		cout<<"- Your University ID: "<<id;
		cout<<"\n- Your Grade: ";
		// put the condtion that can make evaluation 
		if ((grade>=90)&&(grade<=100)) {
			cout<<"A";
		}
		else if ((grade>=80)&&(grade<=89)) {
			cout<<"B";
		}
		//the another conditon after frist if contdion 
		//choosing a code t be executed if the condition is true
		else if ((grade>=70)&&(grade<=79)) {
			cout<<"C";
		}
		//else if is used to skip the condition to the next one in
		//case it is true
		else if ((grade>=60)&&(grade<=69)) {
			cout<<"D";
		}
		else if ((grade>=0)&&(grade<60)) {
			cout<<"F";
		}
		else {
			cout<<"Wrong Values";
		}
		cout<<"\n- Your Department: ";
		// this statement allows variable to be tested for quality 
		switch (sec)
		{
		//variale to test equality for a list of values
		//and it is used with switch condition
		case 1:{
			cout<<"First Year";
			break;
		}
		case 2:{
			cout<<"Second Year";
			break;
		}
		case 3:{
			cout<<"Third Year";
			break;
		}
		case 4:{
			cout<<"Fourth Year";
			break;
		}
		case 5:{
			cout<<"Fifth Year";
			break;
		}
		default :{cout<<"Unknown Year";break;}
		}
	 	if (speciality=="T") {
			cout<<" Communication ";
		}
	 	else if (speciality=="A") {
			cout<<" Control ";
		}
	 	else if (speciality=="C") {
			cout<<" Computer ";
		}
		else {
			cout<<"\n- Section: " << speciality << endl;
		}
	 	break;
 		}
 	//execute the code once before checking if the condition is true
	while (i>=1);
	return 0;
}
