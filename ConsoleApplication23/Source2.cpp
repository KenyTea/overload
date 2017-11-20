#include <iostream>
#include <string>

using namespace std;


class Integer {
public:
	int value;
	explicit Integer(){}
	explicit Integer(int x) : value (x) {}

	Integer & operator = (const int & x) {
		value = x;
		return *this;
	}

	Integer & operator + (Integer & x) {

		Integer y(this->value + x.value);
		return y;
	}

	Integer & operator - (Integer & x) {

		Integer y(this->value - x.value);
		return y;
	}

	/*void operator ++ () {
		++this->value;
	}*/

	Integer & operator ++ () {
		++this->value;      // оператор перегрузки инкримента (префиксный)
		return *this;
	}

	Integer & operator ++ (int) {
		Integer old(value);  // оператор перегрузки инкримента (постфиксный)
		value++;
		return old;
	}

	bool operator == (const Integer & x) { // перегрузка ==
		return value == x.value;

	}

};


int main() {
	Integer a(5);
	Integer b(6);

	Integer c = a + b;
	Integer d = a - b;
	cout << c.value << endl;
	cout << d.value << endl;
	cout << endl;
	cout << ++a.value << endl;
	cout << endl;
	cout << a.value++ << endl;
	cout << a.value << endl;

	Integer A(5), B(5), C(6);
	cout << endl;
	cout << (A == B) << endl;
	cout << (A == C) << endl;



	return 0;
}