#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Input number:" << endl;
    cin >> a;
    b = (a % 10) * 10 + (a / 10);
    cout << "Result=" << b;
}