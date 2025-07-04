#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string word = "beautiful";
    unordered_map<char, int> vowels;

    for (char ch : word) {
        if (ch == 'o' || ch == 'e' || ch == 'u' || ch == 'i' || ch == 'a') {
            vowels[ch]++;
        }
    }

    for (auto pair : vowels) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
