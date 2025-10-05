// type convervion 
// manual Type conversion [stoi]= string to int

#include<iostream>
#include<string>
using namespace std;
int main(){
    string navratri_day = "6.78";
    float day = stoi(navratri_day);
    cout << day;
}