#include <iostream>
#include <string>

using namespace std;
int main() {
    string str;
    cout << "enter operation and two operands." << endl;
    getline(cin, str);
    string op = str.substr(0, str.find(" "));
    str.erase(0, str.find(" ") + 1);
    string num = str.substr(0, str.find(" "));
    str.erase(0, str.find(" ") + 1);
    string num2 = str.substr(0, str.find(" "));

    double res;
    if(op == "+")
        res = stof(num) + stof(num2);
    else if(op == "-")
        res = stof(num) - stof(num2);
    else if(op == "*")
        res = stof(num) * stof(num2);
    else if(op == "/")
        res = stof(num) / stof(num2);
    else
        cout << "invalid operator" << endl;

    cout << res << endl;

    return 0;
}
