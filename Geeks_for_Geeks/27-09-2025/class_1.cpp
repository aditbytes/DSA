#include<iostream>
#include<string>
using namespace std;
int main(){
    double sugar = 2.5;
    int egg = 6;
    string recipe = "chocolate Cake";
    bool is_vegetarian = true;
    cout << "Recipe: " << recipe << endl;
    cout <<"sugar: " << sugar << endl;
    cout <<"egg: " << egg << endl;
    if (is_vegetarian = true){
        cout << "is_vegetarian: " << "true";
    }else{
        cout <<"is_vegetarian: " << "false";
    }
    // cout <<"is_vegetarian: " << is_vegetarian << endl;
    return 0;
}