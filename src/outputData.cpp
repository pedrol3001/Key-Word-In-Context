#ifndef outputData_cpp
#define outputData_cpp

#include "../include/outputData.hpp"

template<typename T>  

void outputData<T> :: printTextSequencial(){


    for(unsigned i=0; i< static_cast<T &>(*this).getText().size();i++){
        for(unsigned j=0; j <static_cast<T &>(*this).getText()[i].size();j++){
            
            cout <<  static_cast<T &>(*this).getText()[i][j];
            
            cout << " ";
        }
        cout << endl;
    }

cout << endl;

}



#endif
        
