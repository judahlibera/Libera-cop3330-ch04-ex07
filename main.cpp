#include <iostream>
#include <string>

using namespace std;
int main() {
    string str;
    string optype;
    string op, num, num2;
    double res = 0;
    bool error = false;
    cout << "enter two single digit operands and an operator." << endl;
    do {
        getline(cin, str);
        num = str.substr(0, str.find(" "));
        str.erase(0, str.find(" ") + 1);
        num2 = str.substr(0, str.find(" "));
        str.erase(0, str.find(" ") + 1);
        op = str.substr(0, str.find(" "));

        error = false;

    if (num == "one")
        num = "1";
    else if (num == "two")
        num = "2";
    else if (num == "three")
        num = "3";
    else if (num == "four")
        num = "4";
    else if (num == "five")
        num = "5";
    else if (num == "six")
        num = "6";
    else if (num == "seven")
        num = "7";
    else if (num == "eight")
        num = "8";
    else if (num == "nine")
        num = "9";
    else if (num == "zero")
        num = "0";
    else {
        try{
            stoi(num);
        }
        catch(exception &err) {
            error = true;
            cout << "invalid number entry";
            continue;
        }
    }

    if (num2 == "one")
        num2 = "1";
    else if (num2 == "two")
        num2 = "2";
    else if (num2 == "three")
        num2 = "3";
    else if (num2 == "four")
        num2 = "4";
    else if (num2 == "five")
        num2 = "5";
    else if (num2 == "six")
        num2 = "6";
    else if (num2 == "seven")
        num2 = "7";
    else if (num2 == "eight")
        num2 = "8";
    else if (num2 == "nine")
        num2 = "9";
    else if (num2 == "zero")
        num2 = "0";
    else {
        try{
            stoi(num2);
        }
        catch(exception &err) {
            error = true;
            cout << "invalid number entry";
            continue;
        }
    }

    if (stoi(num) > 9 || stoi(num2) > 9)
        error = true;

    if (op == "+" || op == "plus") {
        optype = "sum";
        res = stof(num) + stof(num2);
    }
    else if (op == "-" || op == "minus"){
        optype = "difference";
        res = stof(num) - stof(num2);
    }
    else if (op == "*" || op == "times"){
        optype = "product";
        res = stof(num) * stof(num2);
    }
    else if (op == "/" || op == "divide"){
        optype = "quotient";
        res = stof(num) / stof(num2);
    }
    else {
        error = true;
        cout << "invalid operator" << endl;
    }
}while(error == true);
    cout << "The " << optype << " of " << num << " and " << num2 << " is " << res << ".";
    return 0;
}
