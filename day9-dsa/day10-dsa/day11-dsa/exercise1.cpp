#include <iostream>
#include <unordered_map>
#include <sstream>
using namespace std;

int main(){
    string word = "hello hello world";
    unordered_map<string, int> freq;
    stringstream ss(word);
    string text;

    while (ss >> text)
    {
        freq[text];

    }
    for (auto pair : freq)
    {
       cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}
