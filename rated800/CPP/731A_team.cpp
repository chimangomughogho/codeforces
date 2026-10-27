#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count;
    int ans;

    for(int i = 1; i <= n; i++){
        int input;

        int team = 3;
        while(team >= 1){
        cin >> input;
        cout << input << " ";
        team--;
        }
        cout << endl;


    }
    return 0;
}