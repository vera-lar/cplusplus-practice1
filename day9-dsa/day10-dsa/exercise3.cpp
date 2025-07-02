#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main( ){
    string word = "banana";
    unordered_map<char, int> freq;
    for (char ch: word)
    {
        freq[ch]++;

    }
    for (auto pair: freq)
    {
        cout << pair.first<< ": " << pair.second <<endl;
    }
    return 0;
}