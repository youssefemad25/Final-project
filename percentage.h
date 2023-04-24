#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include "detect.h"
using namespace std;

class percentage : public detect {

public:
    bool detectSameWords(string textword, string patternword);
    //detects if they are the same words, similar to detectPlagiarism, but works
    //with words as the detectPlagiarism function won't return true if less than two words were found.

    void percentagecal(string text, string pattern);
    //calculates the percentage of words taken from the text file.
};
// Calculates the percentage of the plagiarised text