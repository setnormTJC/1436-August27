// Sept10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std; 

int main()
{
    //Isaac Demster
    //Sameer Khan (Star Trek)

    //bool isLightGreen = false;
    string currentLightColor = "red"; 

    if (currentLightColor == "green")
    {
        cout << "Keep on truckin' brotha (drive/go through the light)\n";
    }

    else if (currentLightColor == "yellow" or currentLightColor == "Yellow")
    {
        cout << "You might want to slow down - depending on your distance from light\n";
    }

    else //(currentLightColor == "red")
    {
        cout << "Wait - the light is red\n";
    }


    //std::cout << "Hello World!\n";

    //for (int aNumber = 0; aNumber < 10; ++aNumber)
    //{
    //    cout << aNumber << "\n";
    //}
}

