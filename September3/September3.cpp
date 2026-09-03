// September3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string> 

using namespace std; 

int main()
{
	int hisAge = 19; 
	
	string hisName;

	cout << "What is your name?\n";
	cin >> hisName; //reading the input and storing it in the variable

	//prompt Cordaveon for his age: 
	cout << "What is your age, " << hisName << "?\n";
	cin >> hisAge; //reading the input and storing it in the variable

	//this will print his name and age: 
	cout << hisName << " is " << hisAge << " years old.\n";

}

