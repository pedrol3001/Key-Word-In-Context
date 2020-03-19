#ifndef alphabetics_cpp
#define alphabetics_cpp

#include "../include/alphabetics.hpp"

template<typename T>  
void  alphabetics<T> :: orderTextLines(){

    vector<vector<string>> aux = static_cast<T &>(*this).getText();

    sort(aux.begin(),aux.end());

    static_cast<T &>(*this).setText(aux);

}
      

#endif
        
