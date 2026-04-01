#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << setw(5) << "값" << setw(10) << "제곱값" << endl;
    cout << "--------------------" << endl;

    for (int i = 1; i <= 100; ++i) {

        cout << setw(5) << i << setw(10) << i * i << endl;
    }

    return 0;
}
