//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// ������������� ������ ������  https://www.youtube.com/watch?v=c3FJv4v7NlU
//
//class Homan; // ��������� �� ������ ������
//class Apple;  // �������� ������ Apple � �����������  ���� ������ Human
//
//class Human {
//public:
//	/*!!! 1 !!!!*/
//	//void TakeApple(Apple &apple) { // ����� ��������� ������ �� ������ Apple
//
//	//	cout << "TakeApple" << "weight: " << apple.weight << "color: " << apple.color << endl; // ��-�� ������������ ����������� ��������� ������
//	//	// < apple.weight �  << apple.color, ��� ������� ������� ����� � ���������� �����
//	//}
//
//	/*!!! 2 !!!*/
//	void TakeApple(Apple &apple); // ��������� ������, ���� ���������� ���� main
//
//
//};
//
//
//class Apple {
//private:
//	int weight;
//	string color;
//public:
//	Apple(int weight, string color) { // �����������
//		this->weight = weight;
//		this->color = color;
//	}
//
//	friend void Human::TakeApple(Apple &apple);  // ������ �������������, � ������ Apple, ����� �� ������ Human
//};
//
//int main() {
//	Apple apple(150, "red"); // ������ ������ ������ � � ������ ������������ ��������� ���� ��� � ����
//
//	Human human;
//	human.TakeApple(apple);
//
//	system("cls");
//	return 0;
//}
//
//void Human::TakeApple(Apple & apple) // ���������� ������ !!!! 2 !!!!
//{                                              //                             //
//	cout << "TakeApple" << "weight: " << apple.weight << "color: " << apple.color << endl; // ������ ���!
//}
