#include<string>
#include<iostream>
#include<string>
using namespace std;
/*№ 3
Разработать класс String, который в дальнейшем будет
использоваться для работы со строками. Класс должен
содержать:
•	 Конструктор по умолчанию, позволяющий создать
строку длиной 80 символов;
•	 Конструктор, позволяющий создавать строку произ-
вольного размера;
•	 Конструктор, который создаёт строку и инициализи-
рует её строкой, полученной от пользователя.
Необходимо создать деструктор, а также использовать
механизмы делегирования конструкторов, если это воз-
можно.
Класс должен содержать методы для ввода строк с клави-
атуры и вывода строк на экран. Также нужно реализовать
статическую функцию-член, которая будет возвращать
количество созданных объектов строк.*/


class String { // class string
public:
	char *str;
	static int count;
	int size;
	String(int size = 80) { // default constructor
		str = new char[size];
		count++;
	}

	String(int x) {
		str = new char[x];
		size = x;
		count++;
	}

	//String(string *a) {
	// Long = new int(string(a));
	// str = new char[*Long];
	// }

	~String() {
		delete str;
	}

	void enter() {
		string s;
		getline(cin, s);
		for (int i = 0; i < s.length(); i++) {
			str[i] = s[i];
		}
		

	}

	void show() {
		for (int i = 0; i < size; i++) {
			cout << str[i];
		}
		cout << endl;
	}

	char stat() {

		return (int)str;
	}

};

int String::count = 0;

int main() {

	String a();
	String a(20);

	cout << String::count;
	system("pause");
	return 0;
}