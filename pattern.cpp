#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include "pattern.h"
using namespace std;

void pattern::enterthepatternfile(string x) {
    set_infile_name(x);
    input();
}
//This function takes the pattern files as input and stores them.

vector<string> pattern::split_plattern() {
    int start = 0;
    int end = 0;
    int len = inputdata.length();

    while (end < len) {
        if (inputdata[end] == '.') {
            r.push_back(inputdata.substr(start, end - start + 1));
            start = end + 1;
        }
        end++;
    }
    //Move through the pattern and when a '.' is found pushback the sentence and update the start, else incremented the end.
    return r;
}