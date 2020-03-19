#ifndef circularShift_h
#define circularShift_h

#include "outputData.hpp"
#include "../src/outputData.cpp"

#include "alphabetics.hpp"
#include "../src/alphabetics.cpp"

#include <iostream>
#include <vector>
#include <string>


#include <algorithm>

using namespace std;



template<typename I>
void shift(int shift,vector<I> &vet);


class circularShift : public outputData <circularShift> , public alphabetics<circularShift>{
    private:

  
        vector<vector<string>> Text;


    public:

        circularShift();

        vector<vector<string>> getText();
        void setText(vector<vector<string>> text);

        circularShift(vector<vector<string>> text,  string stop_words);

        void setupTextCircularShifts(vector<vector<string>> text, string stop_words);


};

#endif