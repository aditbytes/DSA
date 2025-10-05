// type conversion 
// int + double = double [type promotion]


#include<iostream>
#include<string>
using namespace std;
int main(){
    int integer_num = 10;
    double float_num = 3.14567;
    float result = integer_num + float_num;
    cout << "result: " << result << endl;
    return 0;
}
