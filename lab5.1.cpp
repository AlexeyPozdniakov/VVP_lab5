#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Input size of file in b:" << endl;
    cin >> a;
    a /= 1024;
    cout << "Size of file in Kb=" << a;
}
