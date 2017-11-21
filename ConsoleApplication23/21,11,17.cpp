#include <iostream>
#include <string>

using namespace std;

 
int fib(int n) {
	if (n == 0 || n == 1) {
		return n;
	}
	return fib(n - 1) + fib(n - 2);
}


int main() {
	/*int a = 0, b = 1, c;
	cout << "Enter a & b" << endl;
	cin >> a >> b;
	for (int i = 2; i < 20; i++) {
		c = a + b;
		a = b;
		b = c;
		cout << a << " " << b;
	}*/

	for (int i = 0; i < 20; i++)
		cout << "Fibanachi " << i << "     " << fib(i) << endl;
	system("pause");
	return 0;
}