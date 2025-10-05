#include<iostream>
#include<string>
using namespace std;
int main(){
    bool is_available = true;
    cout << to_string(is_available) << endl;
    string check = to_string(is_available);
    cout << check << endl;
    bool to_bool = (check == "1");
    cout << to_bool << endl;
    return 0;
}
