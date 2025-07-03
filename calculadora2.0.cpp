#include <iostream>
using namespace std;

int main() {

    float a,b;
    string c;
    cin >> a >> c >> b;
    if (c == "+") {
        cout << a + b;
    }
    if (c == "-") {
        cout << a - b;
    }
    if (c == "x") {
        cout << a * b;
    }
    if (c == "/") {
        cout << a / b;
    }
}
