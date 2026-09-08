//Lab 1 Task 2:
//Declare int numbers[5]; and initialise int total = 0;.
// Use one loop to read five integers into the array and a second loop to add them to total.
// Display the total. Assume the user enters exactly five valid integers whose sum fits in int.

#include <iostream>
using namespace std;
int main(){

    //declaring the array
    int numbers[5];

    //initializing the total variable
    int total = 0;

    for (int i=0; i<5; i++)
    {
        //Reading the values from the users
        cout<< "Enter number "<< i+1<< ": ";
        cin>> numbers[i];

    }

    for ( int i=0; i<5; i++)
    {
        //Adding the values of the total variable
        total += numbers[i];
    }

    //Displaying the total value
    cout << "Total: " <<total;

    return 0;

}