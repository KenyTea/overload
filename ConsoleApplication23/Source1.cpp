//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// дружественные методы класса  https://www.youtube.com/watch?v=c3FJv4v7NlU
//
//class Homan; // указываем на всякий случай
//class Apple;  // сообщаем классу Apple о присутствии  выше класса Human
//
//class Human {
//public:
//	/*!!! 1 !!!!*/
//	//void TakeApple(Apple &apple) { // метод принимает ссылку на объект Apple
//
//	//	cout << "TakeApple" << "weight: " << apple.weight << "color: " << apple.color << endl; // из-за особенностей компедятора возникает ошибка
//	//	// < apple.weight и  << apple.color, для решения выносим метод в глобальную часть
//	//}
//
//	/*!!! 2 !!!*/
//	void TakeApple(Apple &apple); // сигнатура метода, сама реализация ниже main
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
//	Apple(int weight, string color) { // конструктор
//		this->weight = weight;
//		this->color = color;
//	}
//
//	friend void Human::TakeApple(Apple &apple);  // делаем дружественный, в классе Apple, метод из класса Human
//};
//
//int main() {
//	Apple apple(150, "red"); // создаём объект класса и с помощю конструктора заполняем поля вес и цвет
//
//	Human human;
//	human.TakeApple(apple);
//
//	system("cls");
//	return 0;
//}
//
//void Human::TakeApple(Apple & apple) // реализация метода !!!! 2 !!!!
//{                                              //                             //
//	cout << "TakeApple" << "weight: " << apple.weight << "color: " << apple.color << endl; // ошибок нет!
//}
