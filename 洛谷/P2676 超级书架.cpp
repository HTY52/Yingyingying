#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//题目链接：https://www.luogu.org/problemnew/show/P2676 

int EuclideanAlgorithm(int a, int b) {
	int t;
	while(b) {
		t = a%b;
		a = b;
		b = t;
	}
	
	return a;
}

int main() {
	unsigned int n;
	int b;
	cin >> n >> b;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	sort(a.begin(), a.end());
	
	int s = 0;
	for(int i = 0; i < n; ++i) {
		s += a[n - i - 1];
		if(s >= b) {
			cout << i+1 << endl;
			break;
		}
	}
	
	return 0;
} 
