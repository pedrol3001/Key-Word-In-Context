#include "../include/inputData.hpp"

string slice(string v, int m, int n)
{


      auto first = v.cbegin() + m;
      auto last = v.cbegin() + n + 1;

      string vec(first, last);
      return vec;
  
    
}

vector<string> split(string text){

    vector<string> vec;
    string a;
    string b = text;
    
    int space=0;
    while(b.size()>0){

        space =0;
        while(b[space] != ' '){

            space ++;

            if(b[space] == '\0'){
                transform(b.begin(), b.end(), b.begin(), ::tolower); 
                vec.push_back(b);
                return vec;
            }
        } 
        


        a = slice(b,0,space-1);
        b = slice(b,space+1,b.size()-1);
        
        
        transform(a.begin(), a.end(), a.begin(), ::tolower); 
        vec.push_back(a);

    }

    return vec;

}

vector<vector<string>> inputData::getText(){

    return Text;

}

void inputTxt::setFilename(string fileName){

    this->fileName = fileName;

}

 inputTxt::inputTxt() : fileName("-1"){

 }

void inputTxt::setupText(){

    if(fileName == "-1")
        throw(runtime_error("E necessario setar o nome do arquivo txt antes de fazer o setup"));

    string line;

    string txt_filename = fileName;

    ifstream fp;

    if(string(txt_filename.end()-4,txt_filename.end())==".txt")
        fp.open(txt_filename);   
    else    
        throw(runtime_error("Arquivo nao e .txt"));

    
    if(!fp.is_open()){
        throw(runtime_error("Falha ao abrir arquivo"));
    }

    while(getline(fp,line)){


        Text.push_back(split(line));
        
    }


    fp.close();



}




void inputKeyboard::setupText(){


    string leitura;

    do{

        getline(cin,leitura);

        if (leitura != "-1")
            Text.push_back(split(leitura));


    }while(leitura != "-1");


}