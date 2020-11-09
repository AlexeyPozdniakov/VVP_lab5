#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Input number:" << endl;
    cin >> a;
    b = (a % 100) * 10 + (a / 100);
    cout << "Result=" << b;
}