#ifndef inputData_h
#define inputData_h

#include "outputData.hpp"
#include "../src/outputData.cpp"

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include <algorithm>

using namespace std;

class inputData : public outputData<inputData>{


    protected:

        vector<vector<string>> Text;

    public:


        vector<vector<string>> getText();

        virtual void setupText() =0;



};


class inputTxt : public inputData {

    private:

        string fileName;
   
    public:

        inputTxt();

        void setFilename(string fileName);
        void setupText() override;



};


class inputKeyboard : public inputData{



    public:


        void setupText() override;



};



#endif