#include <iostream>
#include <string>
using namespace std;

string reduceString(const string& str) {
    string result;
    int n = str.length();

    for (int i=0; i<n; ) {
        char current_char=str[i];
        int count = 0;

        while (i<n && str[i]==current_char) {
            count++;
            i++;
        }

        result+=current_char;
        if (count>1) {
            result += to_string(count);
        }
    }
    return result;
}

int main() {

    string input1= "aabbbbeeeeffggg";
    string output1= reduceString(input1);
    cout << "Input: " << input1 << endl;
    cout << "Output: " << output1 << endl;

    string input2= "abbccccc";
    string output2= reduceString(input2);
    cout << "Input: " << input2 << endl;
    cout << "Output: " << output2 << endl;

    return 0;
}
