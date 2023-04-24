#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include "percentage1.h"
using namespace std;

void percentage1::percentage_cal(string text, string pattern) {
    int matching = 0;
    //counter for matching words
    int percentage;
    if (detectPlagiarism(text, pattern) == 0) {
        percentage = 0;
    }
    //if there is no plagiarism detected, there is no need to continue, and if you didn't check the functoin will
    //calculate a plagiarism percentage for one word while no plagiarism is cosidered for one word
    else {
        vector<string> textWords = split_sentence(text);
        vector<string> patternWords = split_sentence(pattern);
        //form a vector of words for the text and pattern to compare the words
        for (int i = 0; i < patternWords.size(); i++) {
            for (int j = 0; j < textWords.size(); j++) {
                if (detectPlagiarism(textWords[j], patternWords[i])) {
                    matching++;
                    break;
                }
            }
        }
        percentage = ((float)matching / patternWords.size()) * 100;
        //percentage is calculated
    }
    cout << "the text is " << percentage << "% " << "plagirized";
}