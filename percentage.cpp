#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include "percentage.h"
using namespace std;

bool percentage::detectSameWords(string textword, string patternword) {
    int word1Len = textword.length();
    int word2Len = patternword.length();
    if (word1Len != word2Len) {
        return false;
        //if the words aren't the same size there is no need to continue
    }
    int word1Hash = hash1(textword, word1Len);
    int word2Hash = hash1(patternword, word2Len);
    //form hashes for the two words
    if (word1Hash == word2Hash && isEqual(textword, patternword, 0, 0, word1Len)) {
        return true;
    }
    return false;
    //return true if they are the same word
}
//detects if they are the same words, similar to detectPlagiarism, but works
//with words as the detectPlagiarism function won't return true if less than two words were found.


void percentage::percentagecal(string text, string pattern) {
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
                if (detectSameWords(textWords[j], patternWords[i])) {
                    matching++;
                    break;
                }
                //if they are the same word matching is increamented
            }
        }

        percentage = ((float)matching / patternWords.size()) * 100;
        //percentage is calculated

        cout << "the text is " << percentage << "% " << "plagirized";
    }
}