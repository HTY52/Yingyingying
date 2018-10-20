#include <iostream>
#include <algorithm>

using namespace std;

//题目链接：https://www.luogu.org/problemnew/show/P1116

int main() {

    int a[10010];
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            if(a[j] < a[j-1]) {
                swap(a[j], a[j-1]);
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
