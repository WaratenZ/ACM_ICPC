#include <iostream>
#include <fstream>
#include <algorithm>
//read the first line

using namespace std;

int main(int argc, char *argv[]){
    //define the variable
    int num_elem;
    int num_operation;
    int counter_operation;
    int p,r;
    int *array;
    int *temp;
    ifstream readfile("input.txt"); 
    //this might just created a new file rather than reading it.

    if(!readfile){
        cout<<"File not found"<<endl;
        return 2;
    }
    //while eof is false keep go through the roop
    while(!readfile.eof()){
        
        readfile>>num_elem>>num_operation;
        if(num_elem == 0) return 0;
        array = (int*)malloc(num_elem*sizeof(int));
        int j=1;
        for(int i=num_elem-1; i>=0; i--){
            array[i] = j;
            j++;
        }

         for(int i = 0; i<num_operation; i++){
            readfile>>p>>r;
            //swapping p elements with r elements on the bottom
            if(p>1){
                temp = (int*)malloc(p*sizeof(int));
                // memcpy(temp,array,p);
                 
                copy(array,array+p-1,temp);
                //copy(array+p-1,array+r,array);
                memcpy(array, array+p-1, r);
                //memcpy(array+r,temp,p-1);
                copy(temp,temp+p-1,array+r);
                delete temp;
            }
         }
        
         cout<<array[0]<<endl;
        delete array;
        
    }
    readfile.close();
    return 0;
}