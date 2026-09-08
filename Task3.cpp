//Lab 1 Task 3
//Define a class named Student with two public integer data members, rollNumber and marks. 
//Add a public member function void display() that prints both values with labels on separate lines. 
//Define the class above main(). Inside main(), create objects s1 and s2. Assign and display dot operator

#include <iostream>
using namespace std;

//Defining the class Student
class Student{

public: 

//Defining the data members of the class 
     int  rollNumber;
     int marks;

//The display funtion for displaying the values of the data members     
    void display(){

        cout <<" Roll Number: "<< rollNumber<< endl; //Displaying the roll number
        cout <<" Marks: "<< marks <<endl;            //Displaying the marks

    } 

};

int main(){


    Student s1, s2; //creating the objects of s1 and s2

    //assigning values to the data members of s1
    s1.rollNumber = 1;
    s1.marks= 75;

    //assing values to the data members of s2
    s2.rollNumber = 2;
    s2.marks= 90;


   //using the display function
   cout<< "=====Student 1===== "<<endl;
    s1.display();
   cout<< "=====Student 2===== "<<endl;
    s2.display();


    //Changing the marks of s1

    s1.marks= 80;

    cout<<"Displaying results after updating Student 1's marks:"<<endl;
    cout<< "===== Student 1===== "<<endl;
    s1.display();
   cout<< "=====Student 2===== "<<endl;
    s2.display();



}