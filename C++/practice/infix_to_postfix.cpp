#include <iostream>
using namespace std;

int precedence(char c) {
    if (c == '^') {
        return 3;
    }
    else if (c == '*' || c == '/') {
        return 2;
    }
    else if (c == '+' || c == '-') {
        return 1;
    }
    else {
        return -1;
    }
}

string infix_to_postfix(string s) {
    string stack;
    string result;
    
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            result += s[i];
        }
        else if (s[i] == '(') {
            stack += s[i];
        }
        else if (s[i] == ')') {
            while (!stack.empty() && stack[stack.size() - 1] != '(') {
                result += stack[stack.size() - 1];
                stack.pop_back();
            }
            if (!stack.empty()) {
                stack.pop_back();
            }
        }
        else {
            while (!stack.empty() && 
                   stack[stack.size() - 1] != '(' &&
                   precedence(stack[stack.size() - 1]) >= precedence(s[i])) {
                result += stack[stack.size() - 1];
                stack.pop_back();
            }
            stack += s[i];
        }
    }
    while (!stack.empty()) {
        result += stack[stack.size() - 1];
        stack.pop_back();
    }
    
    return result;
}

int main() {
    string s;
    cout << "Enter the infix expression: ";
    cin >> s;
    cout << "The postfix expression is: " << infix_to_postfix(s) << endl;
    return 0;
}