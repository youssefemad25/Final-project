#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include "file.h"
using namespace std;

class text : public file {
private:
    int c; //number of the existing documents 
public:
    void entertextfiles();
    //This function input the text files based on the number of 
    //files the user decides, then stores each text in a vector.

    int getnumberoftextfiles();
    //This function returns the number of files.
};
//text class is for the text files. It takes the text files as
//input and stores them and calculates the number of text files.