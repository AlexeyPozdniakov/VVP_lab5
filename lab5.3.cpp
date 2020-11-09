#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Input numbers A and B:" << endl;
    cin >> a >> b;
    if (a <= b)
        cout << "Condition isn't completed";
    else
        if (b == 0)
            cout << "Impossible Situation";
        else
        {
            a %= b;
            cout << "Min empty space on scetion A=" << a;
        }
}