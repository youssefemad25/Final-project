#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include "brute_force.h"
using namespace std;

vector<string> Brute_Force::split_sentence(string pattern) { 
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


int Brute_Force::hammingDistance(string str1, string str2) {
    int dist = 0;
    if (str1.length() != str2.length()) {
        return -1;
    }
    //makes sure that they are the same length
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] != str2[i]) {
            dist++;
        }
    }
    //compares each character with the character of the same index
    //if they didn't match increments dist
    return dist;
}

bool Brute_Force::detectPlagiarism(string text, string pattern) {

    int c = 0;
    //counter

    int n = text.length();

    vector<string> r;
    //vector of words for the pattern sentence

    r = split_sentence(pattern);

    for (int i = 0; i < r.size(); i++) {

        int m = r[i].length();

        for (int j = 0; j <= n - m; j++) {

            string substr = text.substr(j, m); //divides the text into strings equal in size to the word

            int dist = hammingDistance(substr, r[i]);//checks if they are equal

            if (dist == 0) {
                c++; //if yes increments the counter

            }
        }    //A loop that through the text string

    }    //A loops that takes each word

    if (c < 2) { return false; }

    return true;
}