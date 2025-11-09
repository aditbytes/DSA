#include<iostream>
using namespace std;

string charFrequency(const string &str) {
    int freq[256] = {0};

    for (char ch : str) {
        freq[(unsigned char)ch]++;
    }

    string result;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            result += (char)i;
            result += to_string(freq[i]);
        }
    }

    return result;
}

int main() {
    string str = "fffgggfffdd";
    cout << "Character frequencies: " << charFrequency(str) << endl;
    return 0;
}