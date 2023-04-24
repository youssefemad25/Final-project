#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include "brute_force.h"
using namespace std;

class percentage1 : public Brute_Force {

public:
    void percentage_cal(string text, string pattern);
    //calculates the percentage of words taken from the text file.
};

//Calculates the percentage of the plagiarised text