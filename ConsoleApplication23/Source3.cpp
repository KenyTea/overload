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

	explicit Integer(const Integer && i) { // конструктор переноса konstruktor perenosa
		value = move(i.value);
	}

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

	bool operator != (const Integer & x) { // перегрузка ==
		return value != x.value;
	}

	bool operator > (const Integer & x) { // перегрузка ==
		return value > x.value;
	}

	bool operator < (const Integer & x) { // перегрузка ==
		return value < x.value;
	}

	explicit operator double() {
		return value;   // operator peregruzka preobrazovaniya tipiv
	}

	explicit operator int() {
		return value;   // operator peregruzka preobrazovaniya tipiv
	}

	explicit operator char() {
		return value;   // operator peregruzka preobrazovaniya tipiv
	}

	friend void print(Integer &i);  // friend functions print
};

void print(Integer& i){ // realisation friend functions print
    cout << i.value;
}


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

	Integer b = move(a); // конструктор переноса konstruktor perenosa*/

	Integer a(5);
	double z = (double)a; // peregruzka preobrazovaniya tipiv
	char b = (int)a;

	Integer x(5);  //// friend functions print
	print(x);

	Progression p = { 5,2 };
	cout << p[5] << endl;
	cout << p(5) << endl;

	return 0;
}

