// Sept15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<algorithm>
#include<fstream> //f stands for file
#include <iostream>//io stands for input/output
#include<string> //getline

//we are going to write to an OUTPUT file here!

using namespace std; 

int main()
{
    //ofstream fout("someText.txt");//the .txt is a "file extension"

    //Danger, Will Robinson!
    //while (true)
    //{
    //    fout << "a\n"; 
    //}
    //fout << "asfdasdf\n";
    //fout << "This is the SECOND line of output written to the file\n";

    //fout.close(); 

    //file extensions are used by an OS to determine the app used to open that file
    //ex: jpg files open with Window's "Photo" app by default
    //and .txt files open with Notepad

    //read input from an already-existing file: 
    ifstream fin(" meText.txt");

    if (fin.is_open() == false) //the file was not found (or somebody else has the file open and is modifying it)
    {   
        cout << "File was not found\n";
        return -1; //"early return"
    }

    string firstLineOfFile; 
    getline(fin, firstLineOfFile); 

    //print to the terminal to confirm we read the file correctly
    cout << "Does this line get printed if the input file is not found?\n";
    cout << firstLineOfFile << "\n";

    fin.close(); 

}

