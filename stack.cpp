#include <iostream>
#include <stack>
#include <stdio.h>

using namespace std;

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << "Elemen pertamanya adalah " << s.top() << endl;
    s.pop();
    cout << "Elemen keduanya adalah " << s.top() << endl;
    s.pop();
    
    cout << "Aku akan memodifikiasi elemen pertama" << endl;
    s.top() = 99;
    cout << "Sekarang elemen pertamanya adalah " << s.top() << endl;

    cout << "Sekarang aku akan mengosongkan stack nya" << endl;
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }

    cout << "Stack sudah kosong!" << endl;

    return 0;
}
