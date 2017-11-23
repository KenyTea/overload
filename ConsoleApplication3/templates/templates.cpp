#include <iostream>

using namespace std;
//23.11.17 templates шаблоны (generic)

	template <typename T> // shablonnaya funkciya
	T getAverageOfArrayElemint(T a[], int size) {
		T sum = 0;
		for (int i = 0; i < size;i++)
		{
			sum += a[i];
		}
		return sum / size;
	}

int main() {
	int a[5] = { 1,2,3,4,5 };
	double b[5] = { 6.,7.,8.,9.,10. };
	float c[5] = {11.,12.,13.,14.,15.};
	char d[5] = {'a','b','c','d','e'};
	cout << getAverageOfArrayElemint(a, 5) << endl;
	cout << getAverageOfArrayElemint(b, 5) << endl;
	cout << getAverageOfArrayElemint(c, 5) << endl;
	cout << getAverageOfArrayElemint(d, 5) << endl;


	system("pause");
	return 0;
}