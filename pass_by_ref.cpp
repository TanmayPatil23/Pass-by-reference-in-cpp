#include <iostream>
using namespace std;
void swap(int &x, int &y) {
    int tmp = x;
    x = y;
    y = tmp;
    return;
}

int main() {
    int ff = 10;
    int ss = 20;
    cout << "Before Swapping: First = " << ff << " and Second = " << ss << endl;
    swap(ff, ss);
    cout << "After Swapping: First = " << ff << " and Second = " << ss << endl;
    return 0;
}   