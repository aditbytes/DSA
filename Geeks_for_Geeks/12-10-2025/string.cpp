#include <iostream>
using namespace std;
int main(){
    // string s_1 = "gfg";
    // cout << s_1 << endl;
    string s_2;
    getline(cin, s_2);
    cout << s_2 << endl;
    s_2.size();
    cout << s_2.size() << endl;
    s_2.subset(1,3);
    cout << s_2.substr(1,3) << endl;
    s_2.find("d");
    cout << s_2.find("d") << endl;
    
    s.push_back('s')
    cout << s << endl;
    s.pop_back();
    cout << s << endl;

    return 0;
}