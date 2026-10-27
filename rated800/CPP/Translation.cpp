#include <iostream>
using namespace std;

int main() {

    string s = "";
    string t = "";
    int j = 0;

    cin >> s;
    cin >> t;

    if(s.size() <= 100 && t.size() <= 100){
        
        for(int i = (s.size() - 1); i >= 0; i--){
            if(s.at(i) == t.at(j)){
                j++;
            }
            
        }
    }

    if(j == s.size()){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}