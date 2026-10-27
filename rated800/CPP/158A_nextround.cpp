#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    cin >> k;
    vector<int> scores(n);
    int count = 0;

    for(int i = 0; i < n; i++){
        cin >> scores[i];
    }

    for(int j = 0; j < n; j++){
        if(scores[j] >= scores[k]){
            count++;
        }
    }

    cout << count;
    return 0;
}