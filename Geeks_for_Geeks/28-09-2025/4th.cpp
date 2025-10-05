#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int CountVowels(string str){
    int count = 0;
    for (int i = 0; i < str.length(); i++){
        //to_lowercase(word);
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' 
            || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            count++;
        }
    }
    return count;
}
int main() {
    string str;
    cin >> str;
    cout << CountVowels(str);
    return 0;
}