#include <iostream>
#include <string>
using namespace std;

int main() {
	int p, n;
	double d, a, b, f, m;
	cin >> p;
	while (p--) {
		cin >> n >> d >> a >> b >> f;
		m = d / (a + b) * f;
		cout << n << ' ' << m << endl;
	}
	return 0;
}