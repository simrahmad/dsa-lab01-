//Read 8 integers into an array. Find and display the largest and smallest values and their indices. 
//If a value occurs more than once, report its first occurrence.


#include <iostream>
using namespace std;
int main(){

    //Declaring an array

    int arr[8];
    cout <<"Enter an 8 digit array"<<endl;

    //Using loop for inputting the values of the array
    for (int i=0; i<8; i++){
        cout << "Enter number "<< i+1<< ": ";
        cin>>arr[i];
    }


    //Making the first elememt of array as the largest and smallest value
    int largest= arr[0];
    int smallest= arr[0];

   //Initializing the index of the largest and smallest value as 0
    int indexLargest=0;
    int indexSmallest=0;


    //Using loop to find the largest and smallest value in the array and their indices
    for(int i=0; i<8; i++){

        if (arr[i]>largest){
            largest= arr[i];
            indexLargest = i;
        }
        if (arr[i]<smallest){
            smallest = arr[i];
            indexSmallest = i;
        }
    }

    //Displaying the largest and smallest values and their indices

    cout<<"Largest value in array: "<<largest<<endl;
    cout<<"Index of largest value: "<<indexLargest<<endl;
    cout<<"Smallest value in array: "<<smallest<<endl;
    cout<<"Index of smallest value: "<<indexSmallest<<endl;


}