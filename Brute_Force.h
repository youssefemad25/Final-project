#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include "file.h"
using namespace std;

class Brute_Force {
public:
    vector<string> split_sentence(string pattern);
    //separates the sentence into a words

    int hammingDistance(string str1, string str2);
    //checks if the word is found in the text

    bool detectPlagiarism(string text, string pattern);
    //detects plagiarism if two or more words from the sentence are taken from the text string
};

//This class uses the Brute Force algorithm to check if a words in the two strings are matching or not.