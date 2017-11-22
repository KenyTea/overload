#include <iostream>
#include <string>

using namespace std;

class Data {
public:
	int *day;
	int *month;
	int *year;

	Data(int day, int month, int year) {
		this->day = new int(day);
		this->month = new int(month);
		this->year = new int(year);
	}

	~Data() {
		delete day;
		delete month;
		delete year;
	}

	friend int operator - (const Data & x, const Data & y) {

		return (*x.day + (*x.month * 30) + (*x.year * 365)) -
			(*y.day + (*y.month * 30) + (*y.year * 365));
	}
	void print(const Data & x, const Data & y) {
		cout << endl;
		cout << x - y << " days" << endl;
	}

	Data &  operator - (Data & x) {
		cout << endl;
		cout<<  (*this->day + (*this->month * 30) + (*this->year * 365)) - (*x.day + (*x.month * 30) + (*x.year * 365))<<endl;
		return x;
	}
};


int main() {
	Data a(22, 11, 2017);
	Data b(15, 6, 1982);

	a.print(a, b);
	
	a.operator-(b);
	system("pause");
	return 0;
}
