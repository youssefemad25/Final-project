#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include "file.h"
using namespace std;

file::file() { 
    infile_name = "";
    outfile_name = "";
    outdata = "";
    inputdata = "";
}

string file::get_inputdata() {
    return inputdata;
}

string file::get_infile_name() {
    return infile_name;
}

void file::set_infile_name(string x) {
    infile_name = x;
}

string file::input() {
    in.open(infile_name);
    //opens the file
    if (in.fail()) {
        in.close();
        cout << "File input failed";
    }
    //If it didn't open it outputs an error message
    getline(in, inputdata);
    //get input from the file
    in.close();
    //closes the file
    return inputdata;
    //returnns the string
}

void file::output(string outfile_name, string outdata) {
    out.open(outfile_name);
    //opens the file
    if (out.fail()) {
        out.close();
        cout << "File output failed";
    }
    //If it didn't open it outputs an error message

    out << outdata;

    //closes the file
    out.close();
    //returnns the string
}