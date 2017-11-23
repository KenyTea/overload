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


	template <typename T> 
	T getMinOfArrayElemint(T a[], int size) {
		if (size < 1) {
			cout << "Array is empty";
		}
		T min = a[0];
		for (int i = 0; i < size; i++)
		{
			if (a[i] < min) {
				min = a[i];
			}
		}
		return min;
	}

	template <typename T>
	T getMAXOfArrayElemint(T a[], int size) {
		if (size < 1) {
			cout << "Array is empty";
		}
		T max = a[0];
		for (int i = 0; i < size; i++)
		{
			if (a[i] > max) {
				max = a[i];
			}
		}
		return max;
	}



	template <typename T>
	void quicksort(T a[], int size) { // sort
		if (size < 1) {
			cout << "Array is empty";
		}
		for (int j = 0; j < size; ++j) {
			for (int i = 0; i < size - 1; ++i) {
				if (a[i] > a[i + 1]) {
					swap(a[i], a[i + 1]);
				}

			}
		}
			for (int i = 0; i < size; ++i)
			{
				cout  << a[i] << " ";
			}
		//int i = left, j = right;
		//int tmp;
		//int sen = arr[(left + right) / 2];

		///* partition */
		//while (i <= j) {
		//	while (arr[i] < sen)
		//		i++;
		//	while (arr[j] > sen)
		//		j--;
		//	if (i <= j) {
		//		tmp = arr[i];
		//		arr[i] = arr[j];
		//		arr[j] = tmp;
		//		i++;
		//		j--;
		//	}

		//}
	}



	template <typename T>
	T getfinedOfArrayElemint(T a[], int x, int size) { // fined
		if (size < 1) {
			cout << "Array is empty";
		}
		
		for (int i = 0; i < size; i++)
		{
			if (a[i] ==  x) {
				cout << endl;
				cout << "your number is  " << x << endl;
			}
			
		}
		cout << endl;
		 cout << "This number is undefined" << endl;
		 return x;
	}

int main() {
	//int a[5] = { 1,2,3,4,5 };   //(5+4+3+2+1) / 5 = 3
	//double b[5] = { 6.,7.,8.,9.,10. };
	//float c[5] = {11.,12.,13.,14.,15.};
	//char d[5] = {'a','b','c','d','e'};
	//cout << getAverageOfArrayElemint(a, 5) << endl;
	//cout << getAverageOfArrayElemint(b, 5) << endl;
	//cout << getAverageOfArrayElemint(c, 5) << endl;
	//cout << getAverageOfArrayElemint(d, 5) << endl;



	int a[5] = { 10,22,13,4,15 };
	cout << "min " << getMinOfArrayElemint(a, 5) << endl;
	cout << "max " << getMAXOfArrayElemint(a, 5) << endl;

	 quicksort(a, 5);

	 getfinedOfArrayElemint(a, 555, 5);

	system("pause");
	return 0;
}