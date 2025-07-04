#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    int nums[5] = {1,2,3,4,3};
    unordered_set<int> seen; 
    

    for (int i = 0; i < 5; i++)
    {
      if (seen.count(nums[i]))
      {
        cout << "Duplicate found:"<<  nums[i];
        break;
      }
      seen.insert(nums[i]);
    }
    return 0;
}

