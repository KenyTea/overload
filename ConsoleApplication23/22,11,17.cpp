#include<string>
#include<iostream>
#include<string>
using namespace std;
/*� 3
����������� ����� String, ������� � ���������� �����
�������������� ��� ������ �� ��������. ����� ������
���������:
�	 ����������� �� ���������, ����������� �������
������ ������ 80 ��������;
�	 �����������, ����������� ��������� ������ �����-
�������� �������;
�	 �����������, ������� ������ ������ � ����������-
���� � �������, ���������� �� ������������.
���������� ������� ����������, � ����� ������������
��������� ������������� �������������, ���� ��� ���-
�����.
����� ������ ��������� ������ ��� ����� ����� � �����-
����� � ������ ����� �� �����. ����� ����� �����������
����������� �������-����, ������� ����� ����������
���������� ��������� �������� �����.*/


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