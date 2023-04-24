#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include "detect.h" 
using namespace std;

vector<string> split_sentence(string pattern) {
    vector<string> v;
    int startIndex = 0, endIndex = 0;
    for (int i = 0; i < pattern.size(); i++) {
        if (pattern[i] == ' ' || pattern[i] == '.') {
            endIndex = i;
            string temp;
            temp.append(pattern, startIndex, endIndex - startIndex);
            v.push_back(temp);
            startIndex = endIndex + 1;
        }
    }
    //Move through the sentence and when a space or '.' is found pushback the word and update the start, else incremented the end.
    return v;
}
//separates the sentence into a words

bool detect::detectPlagiarism(string text, string pattern) {
    int c = 0;
    //counter of the matching words
    int textLen = text.length();
    vector<string> r;
    //vector of words
    r = split_sentence(pattern);
    for (int j = 0; j < r.size(); j++) {
        int patternLen = r[j].length();
        int patternHash = hash1(r[j], patternLen);
        //a hash for the word
        vector<int> hashValues(textLen - patternLen + 1);
        //vector of hashs for the text
        hashValues[0] = hash1(text.substr(0, patternLen), patternLen);
        for (int i = 1; i <= textLen - patternLen; i++) {
            hashValues[i] = hashValues[i - 1] - text[i - 1];
            //forms a new hash
            hashValues[i] /= prime;
            //removes the first letter
            hashValues[i] += text[i + patternLen - 1] * pow(prime, patternLen - 1);
            //adds a new letter at the end
        }
        for (int i = 0; i <= textLen - patternLen; i++) {
            if (patternHash == hashValues[i] && isEqual(text, r[j], i, 0, patternLen)) {
                c++;
            }
            //comparing each word 
        }
    }
    if (c < 2) {
        return false;
    }
    else {
        return true;
        //if atleast two words are the same return true
    }
}