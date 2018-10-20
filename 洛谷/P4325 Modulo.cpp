#include <iostream>
#include <algorithm>

using namespace std;

//题目链接：https://www.luogu.org/problemnew/show/P4325

int main() {
	
	int a[10];
	for(int i = 0; i < 10; i++) {
		cin >> a[i];
		a[i] %= 42;
	}
	
	sort(a, a+10);
	
	int cnt = 1;
	
	for(int i = 1; i < 10; i++) {
		if(a[i] != a[i-1]) {
			cnt++;
		}
	}
	
	cout << cnt << endl	;
	
	return 0;
} 
