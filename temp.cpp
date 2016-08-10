//test the basic file reading oeration
#include <fstream>
#include <iostream>

using namespace std;
int main(){
    int array[5];

    // //THIS WILL CREATE A NEW FILE NAMED outfile
    // ofstream outfile;
    // outfile.open("temp.dat");

    // cout<<"Now writing in the file\n";

    //THIS WILL READ A FILE  
    ifstream infile;
    infile.open("input.txt");

    if(!infile){
        "There is no filed named input1.txt";
        return 2;
    }
    int temp = 0;
    while(!infile.eof()){
        infile>>temp;
        cout<<temp;
        
    }
    

    infile.close();
    return 0;
}
