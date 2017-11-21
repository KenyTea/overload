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

	  Integer(const Integer && i) { // ����������� �������� konstruktor perenosa
		value = move(i.value);
	}

	Integer & operator ++ () {
		++this->value;      // �������� ���������� ���������� (����������)
		return *this;
	}

	Integer & operator ++ (int) {
		Integer old(value);  // �������� ���������� ���������� (�����������)
		value++;
		return old;
	}

	bool operator == (const Integer & x) { // ���������� ==
		return value == x.value;
    }

	bool operator != (const Integer & x) { // ���������� ==
		return value != x.value;
	}

	bool operator > (const Integer & x) { // ���������� ==
		return value > x.value;
	}

	bool operator < (const Integer & x) { // ���������� ==
		return value < x.value;
	}

	
};

class Progression {
public:
	int a1,b;
	int operator [](int i) {
		return a1 + (i - 1) * b;
	}
	int operator ()(int i) {
		return (2 * a1 + b * (i - 1)) * i / 2;
	}

};


int main() {
	/*Integer a(5);
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

	Integer b = move(a); // ����������� �������� konstruktor perenosa*/

	Progression p = { 5,2 };
	cout << p[5] << endl;
	cout << p(5) << endl;

	return 0;
}