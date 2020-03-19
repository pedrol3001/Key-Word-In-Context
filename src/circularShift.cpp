# include "../include/circularShift.hpp"


template<typename I>
void shift(int shift,vector<I> &vet){


    I aux;

    if(vet.size()>1){

    if(shift < 0){

    

        for(int i=0; i < abs(shift); i++){

            aux = vet[0];

            for(unsigned j=0; j < vet.size()-1; j++){

                vet[0+j]=vet[1+j];

            }
            vet[vet.size()-1] = aux;

        }

    }
    else if(shift > 0){

        for(int i=0; i < abs(shift); i++){

            aux = vet[vet.size()-1];
            
            for(unsigned j=0; j < vet.size()-1; j++){

                vet[vet.size()-1-j]=vet[vet.size()-2-j];

            }   
            vet[0] = aux;
        }

    }
    }


}


circularShift::circularShift(vector<vector<string>> text,  string stop_words){

    setupTextCircularShifts(text,  stop_words);
}


vector<vector<string>> circularShift::getText(){

    return Text;

}

void circularShift::setText(vector<vector<string>> text){

    this->Text = text;

}



void circularShift::setupTextCircularShifts(vector<vector<string>> text,  string stop_words){

    ifstream fp;

    string word;

    vector<string> stopWords;

    if(string(stop_words.end()-4,stop_words.end())==".txt")
        fp.open(stop_words);   
    else    
        cout << "Arquivo não é .txt" << endl;

    
    if(!fp.is_open()){
        cout << "Falha ao abrir aquivo" << endl;
        return;
    }

    while(getline(fp,word))
        stopWords.push_back(word);
        
    fp.close();


    for(unsigned i=0;i<text.size();i++){

        for(unsigned j=0;j<text[i].size();j++){

            
            shift(1,text[i]);

            if(find(stopWords.begin(), stopWords.end(), text[i][0]) == stopWords.end())
                Text.push_back(text[i]);  

        }
               
        shift(1,text[i]);

    }


}

