#include <iostream>
using namespace std;

int main() {
    int year = 0;
    
    bool dinstict = false;
    cin >> year;
    int BeutifulYear = year++;
    

while(!dinstict){
    dinstict = true;
    BeutifulYear++;
    string s = to_string(BeutifulYear);
        for(int i = 0; i < s.size(); i++){
            for(int j = (i + 1); j < s.size(); j++){
                if(s[i] == s[j]){
                    dinstict = false;
                    break;
            }
        }

        if(!dinstict){
            break;
        }
    }

    

}

cout << BeutifulYear << endl;
    return 0;
}