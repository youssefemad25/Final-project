#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
using namespace std;

class Rabin_Karp {
protected:
    const int prime = 101;
public:
    int hash1(string s, int len);
    //forms a hash for each word

    bool isEqual(string first, string second, int first_beginning, int second_beginning, int len);
    //compare the two words per letter to check that they are the same words
};

//This class uses the Rabin Karp algorithm to check if a word is matched in the text string or not.  
