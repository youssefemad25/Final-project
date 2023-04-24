#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include "rabin_karp.h"
using namespace std;

int Rabin_Karp::hash1(string s, int len) {
    int h = 0;
    for (int i = 0; i < len; i++) {
        h += s[i] * pow(prime, i);
    }
    //for each letter,form a hash then add them all together. 
    return h;
}
//forms a hash for each word

bool Rabin_Karp::isEqual(string first, string second, int first_beginning, int second_beginning, int len) {

    for (int i = 0; i < len; i++) {
        if (first[first_beginning + i] != second[second_beginning + i]) {
            return false;
        }
    }
    return true;
    //Move through the to strings from the started points and compare each letter with the letter of the same index. if one letter didn't match return false
}