#include <iostream>
#include <algorithm>

using namespace std;

//题目链接：https://www.luogu.org/problemnew/show/P4414

int main() {

    int a[3];
    char b[4];

    for (int i = 0; i < 3; ++i) {
        cin >> a[i];
    }

    cin >> b;

    sort(a, a+3);

    cout << a[b[0]-'A'] << " " << a[b[1]-'A'] << " "<< a[b[2]-'A'] << endl;

    return 0;
}