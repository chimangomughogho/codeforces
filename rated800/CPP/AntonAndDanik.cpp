#include <iostream>
using namespace std;

int main() {

    int anton = 0;
    int danik = 0;

    int n = 0;
    string s = "";
    cin >> n;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == 'A'){
            anton++;
        }else{
            danik++;
        }
    }

    if(anton > danik){
        cout << "Anton" << endl;
    }else if(anton < danik){
        cout << "Danik" << endl;
    }else{
        cout << "Friendship" << endl;
    }

    return 0;
}