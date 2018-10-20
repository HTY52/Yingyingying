#include <iostream>
#include <algorithm>

using namespace std;

//题目链接：https://www.luogu.org/problemnew/show/P1888#sub

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
	
	int a[3];
	for(int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	
	sort(a, a+3);
	
	a[1] = EuclideanAlgorithm(a[2], a[0]);
	
	cout << a[0] / a[1] << "/" << a[2] / a[1] << endl;
		
	return 0;
}