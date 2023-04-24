
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include "rabin_karp.h"
using namespace std;

class detect :public Rabin_Karp {
public:
    vector<string> split_sentence(string pattern);
    //separates the sentence into a words

    bool detectPlagiarism(string text, string pattern);
    //detects plagiarism if two or more words from the sentence are taken from the text string
};
//Checks if the pattern sentence is plagiarised or not