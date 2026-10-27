#include <iostream>
using namespace std;

int main() {
    auto w = 0;
    while(true){
        cin >> w;

        if(w >= 1 && w <= 100){
            if(w > 2 && w % 2 == 0){
                cout << "YES";
                break;
            }else{
                cout << "NO";
                break;
            }
        }else{
            cout << "Please enter a number between 1 and 100. ";
        }
    }

    return 0;
}