#include <iostream>
using namespace std;

int main() {
     int n;
    cout << "Enter the size of your: ";
    cin >> n;
    int *nums = new int[n];
    
    for(int i = 0; i < n; i++){
        nums[i] = nums[i] + i;
    }

    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }

    return 0;
}