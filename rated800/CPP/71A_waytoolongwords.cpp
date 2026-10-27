#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> w(n);
    for(int i = 0; i < n; i++){
        cin >> w[i];
        for(int j = 0; j < w[i].length(); j++) {
            w[i][j] = tolower(w[i][j]);
        }
    }



for(int i = 0; i < n; i++){
    if(w[i].length() > 10){
        char first = w[i].at(0);
        char last = w[i].at(w[i].length() - 1);
        int len = w[i].length() - 2;
        cout << first << len << last << endl;
    }else{
        cout << w[i] << endl;
    }
}


    return 0;
}