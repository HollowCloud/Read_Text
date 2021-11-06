#include "Text_Preprocessor.h"


void Text_Preprocessor::preprocess_text() {

    while(getline(File, my_str)){
        my_str.erase(remove(my_str.begin(), my_str.end(), '.'), my_str.end()); //remove . from string
        my_str.erase(remove(my_str.begin(), my_str.end(), ','), my_str.end()); //remove , from string
        my_str.erase(remove(my_str.begin(), my_str.end(), '?'), my_str.end()); //remove ? from string
        my_str.erase(remove(my_str.begin(), my_str.end(), '!'), my_str.end()); //remove ! from string
        my_str.erase(remove(my_str.begin(), my_str.end(), ':'), my_str.end()); //remove : from string
        my_str.erase(remove(my_str.begin(), my_str.end(), ';'), my_str.end()); //remove ; from string
        my_str.erase(remove(my_str.begin(), my_str.end(), '"'), my_str.end()); //remove " from string

        //This is for Conversion of a letters into lowercase:
        for(int i=0;my_str[i]!='\0';i++)
        {
            if (my_str[i] >= 'A' && my_str[i] <= 'Z')    //checking characters for the uppercase
                my_str[i] = my_str[i] + 32;              //converting into lowercase
        }

        //This is for removing prepositions an, a, the:

        string t = "an ";
        string t1 = "a ";
        string t2 = "the ";
        string t3 = "on ";
        string t4 = "in ";
        string t5 = "at ";
        string t6 = "since ";
        string t7 = "for ";
        string t8 = "before ";
        string t9 = "ago ";
        string t10 = "to ";
        string t11 = "by ";


        int k = -1; //this is for search
        int k1 = -1;
        int k2 = -1;
        int k3 = -1;
        int k4 = -1;
        int k5 = -1;
        int k6 = -1;
        int k7 = -1;
        int k8 = -1;
        int k9 = -1;
        int k10 = -1;
        int k11 = -1;

        do{
            k = my_str.find(t, k+1);
            if(k != -1){ //if we find it we will get rid of it..
                my_str = my_str.substr(0, k) + my_str.substr(k + t.length());
            }
        }while(k != -1);


        do{
            k1 = my_str.find(t1, k1+1);
            if(k1 != -1){
                my_str = my_str.substr(0, k1) + my_str.substr(k1 + t1.length());
            }
        }while(k1 != -1);

        do{
            k2 = my_str.find(t2, k2+1);
            if(k2 != -1){
                my_str = my_str.substr(0, k2) + my_str.substr(k2 + t2.length());
            }
        }while(k2 != -1);


        do{
            k3 = my_str.find(t3, k3+1);
            if(k3 != -1){
                my_str = my_str.substr(0, k3) + my_str.substr(k3 + t3.length());
            }
        }while(k3 != -1);


        do{
            k4 = my_str.find(t4, k4+1);
            if(k4 != -1){
                my_str = my_str.substr(0, k4) + my_str.substr(k4 + t4.length());
            }
        }while(k4 != -1);


        do{
            k5 = my_str.find(t5, k5+1);
            if(k5 != -1){
                my_str = my_str.substr(0, k5) + my_str.substr(k5 + t5.length());
            }
        }while(k5 != -1);


        do{
            k6 = my_str.find(t6, k6+1);
            if(k6 != -1){
                my_str = my_str.substr(0, k6) + my_str.substr(k6 + t6.length());
            }
        }while(k6 != -1);


        do{
            k7 = my_str.find(t7, k7+1);
            if(k7 != -1){
                my_str = my_str.substr(0, k7) + my_str.substr(k7 + t7.length());
            }
        }while(k7 != -1);


        do{
            k8 = my_str.find(t8, k8+1);
            if(k8 != -1){
                my_str = my_str.substr(0, k8) + my_str.substr(k8 + t8.length());
            }
        }while(k8 != -1);


        do{
            k9 = my_str.find(t9, k9+1);
            if(k9 != -1){
                my_str = my_str.substr(0, k9) + my_str.substr(k9 + t9.length());
            }
        }while(k9 != -1);


        do{
            k10 = my_str.find(t10, k10+1);
            if(k10 != -1){
                my_str = my_str.substr(0, k10) + my_str.substr(k10 + t10.length());
            }
        }while(k10 != -1);


        do{
            k11 = my_str.find(t11, k11+1);
            if(k11 != -1){
                my_str = my_str.substr(0, k11) + my_str.substr(k11 + t11.length());
            }
        }while(k11 != -1);

        cout << my_str << endl;

    }


}


void Text_Preprocessor::search_word(const string &s) {
    int i = 0;
    cout << s;

    preprocess_text();

    cout << endl;
    cout << endl;
    cout << "HEYYYYYYYYY" << endl;
    while (!File.eof()) // for each candidate word read from the file
    {
        getline(File, my_str);
        size_t found = my_str.find(s);
        if (found != std::string::npos) {
            cout << "The word " << s << " has been found in line " << my_str;
        } else {
            cerr << "Error! File not found!\n";
            exit(1);
        }


    }


}

