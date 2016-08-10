// 0. Three Data Types
// ofstream -> Out File Stream
// used to create files and to write information to files

// ifstream -> Input File Stream
// used to read information from files

// fstream -> file stream general

// 1. Opening/ closing a file
//     1.1Flags
//     ios::app -> append
//     ios::ate -> Open a file for output and r/w from the end
//     ios::in -> open for reading
//     ios::out -> open for writing


//     //example
/*

     ofstream outfile;
     outfile.open("name_of_file", ios::out | ios::trunc);
     close();

*/
/*
The expression above can be shorten as following

    ofstream file1("file_name");
    
    */
// 2. Writing to a file
//     use the '<<' operator to write into a file, just like 'cout'
// 3. Reading from a file
//     use the '>>' ioeprator to read from a file. just like 'cin'

//example
#include <fstream>
#include <iostream>
using namespace std;
 
int main ()
{
    
   char data[100];

   // open a file in write mode.
   ofstream outfile;
   outfile.open("afile.dat");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(data, 100);

   // write inputted data into the file.
   outfile << data << endl;

   cout << "Enter your age: "; 
   cin >> data;
   cin.ignore();
   
   // again write inputted data into the file.
   outfile << data << endl;

   // close the opened file.
   outfile.close();

   // open a file in read mode.
   ifstream infile; 
   infile.open("afile.dat"); 
 
   cout << "Reading from the file" << endl; 
   infile >> data; 

   // write the data at the screen.
   cout << data << endl;
   
   // again read the data from the file and display it.
   infile >> data; 
   cout << data << endl; 

   // close the opened file.
   infile.close();

   return 0;
}
