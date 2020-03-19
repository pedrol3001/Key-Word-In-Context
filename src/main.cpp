#include "../include/circularShift.hpp"

#include "../include/inputData.hpp"

#include <iostream>



using namespace std;


void argError(char *argv[]){

    cout << endl << "Parametros Invalidos" << endl;
    cout << "Modo de Uso: " << *argv[0] << " <caminho do input.txt> <caminho do strop_words.txt>" << endl;
   
   
}


int main(int argc, char *argv[] ){

    if ((argc != 3)){
        argError(argv);
        return 1;
    }


    inputKeyboard input;

    //input.setFilename(argv[2]);

    input.setupText();

    input.printTextSequencial();


    cout << " ----------------------------- "<< endl;

    circularShift shifts(input.getText(),argv[1]);

    shifts.orderTextLines();

    shifts.printTextSequencial();


    return 0;
}