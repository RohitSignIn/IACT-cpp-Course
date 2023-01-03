// Strings
/*
Strings are used for storing text.
A string variable contains a collection of characters surrounded by double quotes:
*/


/*

#include <iostream>
#include <string>
using namespace std;

int main() {
  string greeting = "Hello";
  cout << greeting;
  return 0;
}

*/

//Concatenation
/*
string firstName = "John ";
string lastName = "Doe";
string fullName = firstName + lastName;
cout << fullName;

string firstName = "John";
string lastName = "Doe";
string fullName = firstName + " " + lastName;
cout << fullName;

--Append-- add new data with previous data

string firstName = "John ";
string lastName = "Doe";
string fullName = firstName.append(lastName);
cout << fullName;

--Number and string--
string x = "10";
string y = "20";
string z = x + y;   // z will be 1020 (a string)

--length of string--
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.length();

NOTE: --You might see some C++ programs that use the size() function to get the length of a string. 
This is just an alias of length(). It is completely up to you if you want to use length() or size():


--Access Character of String--
string myString = "Hello";
cout << myString[0];
// Outputs H


--Enter Special Character--
\'	'	Single quote
\"	"	Double quote
\\	\	Backslash


--escape characters--
\n	New Line	
\t	Tab


--User input String--
string firstName;
cout << "Type your first name: ";
cin >> firstName; // get user input from the keyboard
cout << "Your name is: " << firstName;

Note:  std::string greeting = "Hello"; if you are not using namespace std;




*/


