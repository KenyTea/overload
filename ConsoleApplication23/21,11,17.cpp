#include <iostream>
#include <string>

using namespace std;

 
int fib(int n) {
	if (n == 0 || n == 1) {
		return n;
	}
	return fib(n - 1) + fib(n - 2);
}

int fib2(const int n) {
	int *a = new int[n + 1];
	a[0] = 1;
	a[1] = 1;

	for (int i = 2; i < n; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	int res = a[n - 1];
	delete a;
	return res;

}



/*int fib( int N) //Фибаначи
{
	//if (N <= 1)
		//return N;
	
	int prevprev = 0, prev = 1;
	for (int i = 2; i <= N; i++)
	{
		int current = prev + prevprev;
		prevprev = prev;
		 prev = current;
	}

	return prev ;
	//int Result = fib(N - 1) + fib(N - 2);
	// return result;*/

int main() {
	
	/*cout << fib(10) << endl;*/

	for (int i = 0; i < 20; i++)
		cout << "Fibanachi " << i << "     " << fib(i) << endl;
	system("pause");
	return 0;
}