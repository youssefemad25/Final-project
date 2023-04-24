#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include "file.h"
using namespace std;

class pattern : public file {
public:
    vector<string> r;
    //declaring a string of words

    void enterthepatternfile(string x);
    //This function takes the pattern files as input and stores them.

    vector<string> split_plattern();
    //This function separates the pattern string into vectors of sentences, so that each sentence in the file can be treated as a potential pattern.
};
//pattern class is for the pattern files. It takes the pattern files as input and stores them.