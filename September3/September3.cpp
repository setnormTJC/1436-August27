// September3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<cmath>//gives access to sin, sqrt, pow, etc.
#include <iostream> //gives access to cout, cin
#include<string> //gives access to getline 

using namespace std; 

void demoGettingUserInput()
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

}

void demoRNG()
{
	int maxPossibleDiceValue = 10;

	while (true)
	{
		srand(time(0)); //"seeding" the random number generator
		cout << "A random number: " << rand() % maxPossibleDiceValue << "\n"; //rand seems to return (result in) 
	}
}

int squareTheInput(int theInput) //parentheses (pl), parenthesis (sing.)
{
	return pow(theInput, 2); 
}

int main()
{
	int theInputSquared = squareTheInput(5); 
	cout << "The input squared is : " << theInputSquared << "\n";
	//demoRNG(); //calling my boy because he has a truck and I need to move furniture
	
	int result = pow(5, 2); //pow means raise to the power
	int otherResult = pow(2, 5); 


	cout << "pow(5, 2) is: " << result << "\n";
	cout << "pow(2, 5) is: " << otherResult << "\n"; //NEVER copy-paste!

	//cout << 24 % 6 << "\n"; //% is read as "mod"
	//cout << 25 % 6 << "\n";
	//cout << 26 % 6 << "\n";

	//a random number being generated
	return 0; 
}

