#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string Password(string str){
    while (str != "GFG"){
        cout << "wrong password" << endl;
        cout << "Enter Password:" << endl;
        cin >> str;
        // if (str == "GFG"){ 
        //     return " ";
        // }
    }
}
int main() {
    cout << "Enter Password:" ;
    string str;
    cin >> str;
    Password(str);
    cout << "correct password" << endl;
    return 0;

}