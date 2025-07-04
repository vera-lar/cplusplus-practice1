#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    int num1[] = {1, 2, 3};
    int num2[] = {4, 5, 6};
    unordered_set<int> merged;

    for (int i = 0; i < 3; i++)
   
        merged.insert(num1[i]);
    
    for (int i = 0; i < 3; i++)
    
        merged.insert(num2[i]);
    for (int num :merged)
    cout << num << " ";
    return 0;
    
}