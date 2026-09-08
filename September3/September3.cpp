// September3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string> 

using namespace std; 

int main()
{
	/*reading and "echoing" (confirming) the user's NAME:*******************************************/
	string userName;
	cout << "What is your name?\n";
	getline(cin, userName); 

	/*reading and echoing the user's AGE**********************************************/
	string userAge = "19"; //this is an "initialization" statement (set age to initial value)
	cout << "What is your age, " << userName << "?\n";
	getline(cin, userAge); 

	cout << userName << " is " << userAge << " years old.\n";

	/*Finally, get the user's favorite tv show****************************************/
	cout << "What is your favorite television program?\n";
	string users_favorite_tv_show; //(unitialized) snake_case variable name example
	getline(cin, users_favorite_tv_show);
	cout << "You entered this as your fave tv show: " << users_favorite_tv_show << "\n";

	return 0; 
}

