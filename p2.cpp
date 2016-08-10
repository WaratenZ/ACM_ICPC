#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;
//amount of data sets
//data set1
//data set2...
//data set m | m<=100

/*For each data set, it is ordered in..*/
//Initial investment
//Investment years
//Operation 1 (n of them)
//Operation 2...

/* For Each Operation */
// Initial Investment, anual Interest rate, anual operation charge 
struct oper{
    bool compound; //compoundflag
    double rates; //Annual Interests rate
    double fee; //Anual cost
    double fin_balance; //the final balance
};


int main(){
    //file input
    int num_data = 0;
    ifstream readfile("input2.txt");
    readfile>>num_data;

    for(int i=0; i<num_data; i++){
        /* For each data set */
        double invest = 0; //Initial Investment
        int years = 0, num_operations = 0;
        vector<oper> oper_data;
        readfile>>invest;
        readfile>>years;
        readfile>>num_operations;

        
        for(int j = 0; j<num_operations; j++){
            /**
            
                TODO:
                - Use Vector to store the data of each Operation
                - The question is what is the difference of using pushback or just make a element
                - Am I supposed to pass the whole struct to the vector 
                - 


                - Make a Instance of the struct and store every thing in there, then pushback 
                it to the vector.
             */
            oper temp_data;
            readfile>>temp_data.compound>>temp_data.rates>>temp_data.fee;
            temp_data.fin_balance = invest;
            if(emp_data.compound){
                for(int k = 0; k<years; k++)
                    temp_data.fin_balance = temp_data.fin_balance+(invest*temp_data.rates) - temp_data.fee;
                }
            else{
                for(int k = 0; k<years; k++)
                    temp_data.fin_balance = temp_data.fin_balance*temp_data.rates - temp_data.fee;
            }
            //the final balance will saved into fin_balance

            /* push into vector */
            oper_data.pushback(temp_data);
            
        }
        /* Compare all the investment method to get that will maximize the profit */
        
        
        
    }




    /* close file */
    readfile.close();
    

}