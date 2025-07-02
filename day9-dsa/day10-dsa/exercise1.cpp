#include <iostream>
#include <string>
using namespace std;

string reverse_word(string s)
{
    int left = 0;
    int right = s.length() - 1;
    while (left < right)
    {
        swap(s[left], s[right]);
        left++;
        right--;
    }
    return s;

}
int main (){
    string word = "vera";
    cout << reverse_word(word);
    return 0;
 }   