#include <iostream>


using namespace std;

int main() {
    int phy;
    int chem;
    int math;
    cout << "enter marks of physics, chemistry and maths: ";
    cin >> phy;
    cin >> chem;
    cin >> math;
    if (phy <= 70 || chem <= 70 || math <= 70)
    {
        cout << "fail" << endl;
    }
    else
    {
        cout << "pass" << endl;
    }
    return 0;
}