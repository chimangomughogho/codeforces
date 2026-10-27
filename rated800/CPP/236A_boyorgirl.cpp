#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> uniqueChars(1);
    cin >> uniqueChars[0];

    for(int i = 0; i < uniqueChars[0].length(); i++){
        for(int j = 0; j < uniqueChars.size(); j++){
            if(uniqueChars[j][0] == uniqueChars[0][i]){
                break;
            }
            if(j == uniqueChars.size() - 1){
                uniqueChars.push_back(string(1, uniqueChars[0][i]));
            }
        }
    }
    
    if(uniqueChars.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout <<"IGNORE HIM!";
    }

    return 0;
}

//SIMPLER METHOD

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     string name;
//     cin >> name;

//     vector<char> uniqueChars;

//     for (int i = 0; i < name.length(); i++) {
//         bool found = false;

//         for (int j = 0; j < uniqueChars.size(); j++) {
//             if (name[i] == uniqueChars[j]) {
//                 found = true;
//                 break;
//             }
//         }

//         if (!found) {
//             uniqueChars.push_back(name[i]);
//         }
//     }

//     if (uniqueChars.size() % 2 == 0) {
//         cout << "CHAT WITH HER!";
//     } else {
//         cout << "IGNORE HIM!";
//     }

//     return 0;
// }