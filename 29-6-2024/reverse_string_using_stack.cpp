#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverseStringUsingStack(const string& str) {
    stack<char> s;
    string reversedStr = str; 
    for (char ch : str) {
        s.push(ch);
    }
    int size = str.length();
    
    for (int i = 0; i < size; ++i) {
        reversedStr[i] = s.top();
        s.pop();
    }
    
    return reversedStr;
}

int main() {
    string str;
    cout << "Enter a string to reverse: ";
    cin >> str;
    
    string reversedStr = reverseStringUsingStack(str);
    
    cout << "Reversed string is: " << reversedStr << endl;
    
    return 0;
}
