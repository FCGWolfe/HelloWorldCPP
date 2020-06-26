// Hello World - Experimental C++ program.

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() //this makes the program go. I have no idea why. I feel like all programming languages were created by mathematicians smoking crack.
{
	int NumberInput;
	string NameInput;
	string LocationInput;
	int NumberOutput=0;
	cout << "Hello World! This C++ program was created for one purpose: to fuck up your day. \n";
	cout << "Please enter a number to double up: ";
	cin >> NumberInput;
	cout << "You entered " << NumberInput;
	cout << " and its double is " << NumberInput*2;
	cout << " though NumberOutput could be used instead, which produces " << NumberOutput;
	cout << ". Amazing, innit? \n ";
	cout << "Now, tell me your name, youngin... \n ";
	getline(cin, NameInput);
	cout << "Well, it's a pleasure to meet you, " << NameInput;
}