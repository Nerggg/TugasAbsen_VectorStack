#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main() {
    vector<int> v;
    vector<int>::const_iterator CI;
    vector<int>::reverse_iterator RI;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout << "Panjang vectornya adalah " << v.size() << endl;
    cout << "Ukurannya di memory adalah " << v.capacity() << endl;

    cout << "Berikut elemen vector secara berurutan dari depan" << endl;
    for (CI = v.begin(); CI != v.end(); CI++) {
        cout << *CI << endl;
    }

    cout << "Berikut elemen vector secara berurutan dari belakang" << endl;
    for (RI = v.rbegin(); RI != v.rend(); RI++) {
        cout << *RI << endl;
    }

    return 0;
}
