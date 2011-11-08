#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    int num1, num2, num3;
    cout << ("input 3 numbers and it will tell you the max:") << endl;
    cin >> num1 >> num2 >> num3;

    int max;
    max = num1 > num2 ? num1 : num2;
    max = max > num3 ? max : num3;

    cout << ("the max is ") << max << endl;
}
