#include<iostream>
using namespace std;
int main(){
//     vector<int> student;
//     student.push_back(7);
//     student.push_back(8);
//     student.push_back(9);
//     student.push_back(10);
//     student.push_back(7);

//     cout << student.size() << endl;
//     cout << "aditya marks are: " <<student[0] << endl;
//     cout << student[1] << endl;
//     cout << student[2] << endl;
//     cout << student[3] << endl;
//     cout << student[4] << endl;
//     return 0;
// }

    vector <int> student;

    for (int i = 0; i < 5; i++) {
        int marks;
        cin >> marks;
        student.push_back(marks);
    }

    cout << student.size() << endl;
    cout << "aditya marks are: " <<student[0] << endl;
    cout << "aranav marks are: " <<student[1] << endl;
    cout << "rohit marks are: " <<student[2] << endl;
    cout << "arayan marks are: " <<student[3] << endl;
    cout << "param marks are: " <<student[4] << endl;
    return 0;
}