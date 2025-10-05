#include<iostream>
#include<string>
using namespace std;
int main(){
    string title = "Hacked";
    int year = 2015;
    double rating = 8.7;
    bool blockbuster = true;
    cout << "Title:" << title << endl;
    cout << "year:" << year << endl;
    cout << "rating:" << rating << endl;
    cout << "blockbuster:" << (blockbuster ? "true" : "false") << endl;
    return 0;

}