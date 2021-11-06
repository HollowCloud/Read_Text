#include <iostream>
#include <fstream>
#include <string>
#include "Text_Preprocessor.h"
using namespace std;

int main() {

//Task #1
//    Text_Preprocessor t;
////
////    t.preprocess_text();
//
//    //Last one of task 1
//    string type;
//    cin >> type;
//    t.search_word(type);


//Task #2

    double sum = 0.0;
    double all;

    ifstream File;
    File.open("Task2.txt", ios::in);

    if(!File.is_open()){
        cout << "Failed!!!" << endl;
        return 0;
    }

    // 1)
//    while(File >> all) {
//        sum = (sum + all);
//        if(all < 0.478){
//            cout << all << endl;
//        }
//    }

//    cout << "AVERAGE OF ALL: " << sum << endl;


    // 2)
    fstream file;
    string line;
    file.open("Thread1.txt", ios::out);
    double all1[100];

    if(file && File) {
        while (getline(File, line)) {
                file << line << endl;
        }

    }else {
        cout << "NOO" << endl;
    }
    file.close();

//    while(!File.eof()){ // This is for identifying the quantity of all numbers (100)
//        File >> line;
//        count++;
//    }

    //cout << "TOTAL QUANTITY OF NUMBERS: " << count << endl;



    return 0;
}
