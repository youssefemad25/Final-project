#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
using namespace std;

class file {
protected:
    ifstream in;
    ofstream out;
    string infile_name;
    string outfile_name;
    string outdata;
    string inputdata;

public:
    file();

    string get_inputdata();

    string get_infile_name();

    void set_infile_name(string x);

    string input();
    //This function takes the file name as string and then opens it and takes the data writen inside.

    void output(string outfile_name, string outdata);
    //This function takes the file name as string and then opens it and adds the output string to the file. 
};
//A classs that inputs strings from files and outputs strings into files
