#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include "text.h"
using namespace std;

void text::entertextfiles() {
    cout << "Enter the number of text files" << endl;
    cin >> c;
    //user inputs the number of the existing documents 
    vector<text> t(c);
    //a vector of strings is declared
    for (int i = 0; i < t.size(); i++) {
        string x;
        cout << "Enter the name of the text file: " << endl;
        cin >> x;
        t[i].set_infile_name(x);
        t[i].input();
    }
    //each document has its own position in the vector
}
//This function input the text files based on the number of files the user decides, then stores each text in a vector.

int getnumberoftextfiles() {
    return c;
}