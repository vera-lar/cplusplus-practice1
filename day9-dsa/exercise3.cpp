#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    vector <int> merged;

    int i =0, j=0;
    int n1 = sizeof(arr1) /sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);


    while (i < n1 && j < n2)
    {
       if (arr1[i] < arr2[j])
       {
          merged.push_back(arr1[i++] );
       }else{
        merged.push_back(arr2[j++]);
       }
       
    }
    while (i < n1)
    
        merged.push_back(arr1[i++]);

    
    while (j < n2)
   
       merged.push_back(arr2[j++]);
    cout << " Mergerd: ";
    for (int num: merged)cout << num << endl;
       return 0;
    
}