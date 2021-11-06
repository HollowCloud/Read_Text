#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#ifndef READ_TEXT_TEXT_PREPROCESSOR_H
#define READ_TEXT_TEXT_PREPROCESSOR_H




class Text_Preprocessor{

public:
    ifstream File;
    string my_str;
    Text_Preprocessor(){
        File.open("Task1.txt", ios::in); // Opened the File
    };

    ~Text_Preprocessor(){
        cout << endl;
        cout << endl;
        cout << "Erased" << endl;
        File.close();
    }

    void preprocess_text();
    void search_word(const string &s);

};





#endif //READ_TEXT_TEXT_PREPROCESSOR_H
