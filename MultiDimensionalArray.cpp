//MultiDimensionalArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
   // string names[2] = { "John", "Jones",}    //single dimensional array for names
   // string students[5][2] = { "John", "16", "Jones", "48", "Jim", "23", "Jolly","18","Jicky", "70"}; //storing names and ages

    string working_hours[7][2];
    int i,j;
    //input hours
    cout << "Please enter the week days and the number of hours worked";
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 2; j++) {
            cin >> working_hours[i][j];
        }
    }

    //output
    for (i = 0; i < 5; i++) { //refers to the row
        for (j = 0; j < 2; j++) { //refers to column
            cout <<working_hours[i][j]<<"\t";
        }
        cout << "\n";
    }
    cout << "\n";
    return 0;
}