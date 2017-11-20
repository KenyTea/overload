//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
///*Задание.
//Создайте приложение "Телефонная книга". Необходимо
//хранить данные об абоненте (ФИО, домашний телефон,
//рабочий телефон, мобильный телефон, дополнительная
//информация о контакте) внутри соответствующего клас-
//са. Наполните класс переменными-членами, функция-
//ми-членами, конструкторами, inline-функциями-членами,
//используйте инициализаторы, реализуйте деструктор.
//Обязательно необходимо выделять динамически память
//под ФИО. Предоставьте пользователю возможность до-
//бавлять новых абонентов, удалять абонентов, искать або-
//нентов по ФИО, показывать всех абонентов, сохранять
//информацию в файл и загружать из файла.*/
//class Contact {
//public:
//	string *name, *phone, *info;
//	Contact() {
//	}
//	Contact(string name, string phone, string info) {
//		this->name = new string(name);
//		this->phone = new string(phone);
//		this->info = new string(info);
//	}
//	~Contact() {
//		delete name;
//		delete phone;
//		delete info;
//	}
//	string getName() {
//		return *name;
//	}
//	void setName(string name) {
//		*this->name = name;
//	}
//	string getPhone() {
//		return *phone;
//	}
//	void setPhone(string phone) {
//		*this->phone = phone;
//	}
//	string getInfo() {
//		return *info;
//	}
//	void setInfo(string info) {
//		*this->info = info;
//	}
//	inline void print() {
//		//можно и через инспекторы, и через указатель на переменные
//		cout << "name: " << getName() << ", phone: " << *phone << ", info: " << getInfo() << endl;
//	}
//	bool operator ==(Contact contact) {
//		return contact.getName() == getName();
//	}
//};
//
//class PhoneBook : public Contact { // наследование!!!
//public:
//
//	vector<Contact> *contacts;
//	PhoneBook() {
//		contacts = new vector<Contact>();
//		contacts->reserve(10);
//	}
//	void add(string name, string phone, string info) {
//		contacts->push_back(*(new Contact(name, phone, info)));
//	}
//	~PhoneBook() {
//		delete contacts;
//	}
//
//	void print() {
//		for (int i = 0; i < this->contacts->size(); i++) {
//			cout << contacts->at(i).getName() << "\t" << contacts->at(i).getPhone() << "\t" << contacts->at(i).getInfo() << endl;
//		}
//	}
//
//	void addNewContact() {
//		string name, phone, info;
//		system("cls");
//		cout << endl;
//		cout << "Enter Name  "; cin >> name;
//		cout << "Enter Phone  "; cin >> phone;
//		cout << "Enter info  "; cin >> info;
//		cout << endl;
//		this->add(name, phone, info);
//		system("cls");
//	}
//
//	void findContact() {
//		system("cls"); string name, phone;
//		char choice;
//		system("cls");
//		cout << "Enter <<n>> for find by name, or enter <<p>> for find by phone: ";
//		cin >> choice;
//		switch (choice) {
//		case 'n':
//			cout << endl;
//			cout << "Enter the name - "; cin >> name;
//
//			for (int i = 0; i < contacts->size(); i++) {
//				if (*contacts->at(i).name == name) {
//					system("cls");
//					cout << contacts->at(i).getName() << "\t" << contacts->at(i).getPhone() << "\t" << contacts->at(i).getInfo() << endl;
//				}cout << endl;
//			}
//			break;
//		case 'p':
//			cout << "Enter the phone - "; cin >> phone;
//
//			for (int i = 0; i < contacts->size(); i++) {
//				if (*contacts->at(i).phone == phone) {
//					system("cls");
//					cout << contacts->at(i).getName() << "\t" << contacts->at(i).getPhone() << "\t" << contacts->at(i).getInfo() << endl;
//				}cout << endl;
//			}
//			break;
//		}
//
//	}
//
//	void deleteContact() {
//		string name;
//		char choice;
//		cout << "For delete contact enter the name - "; cin >> name;
//		for (int i = 0; i < contacts->size(); i++) {
//			if (*contacts->at(i).name == name) {
//				contacts->erase(contacts->begin() + i);
//			}
//		}
//
//
//	}
//
//	void menu() {
//		while (true) {
//			cout << "--------MENU---------";
//			cout << endl;
//			cout << "For show all PhoneBook press << p >> ";
//			cout << endl;
//			cout << "For add contact press << a >> ";
//			cout << endl;
//			cout << "For delete contact press << d >>  ";
//			cout << endl;
//			cout << "For sort contact press << s >>  ";
//			char action;
//			cout << endl;
//			cout << "Enter Your action : "; cin >> action;
//			cout << endl;
//			system("cls");
//
//			switch (action)
//			{
//			case 'p':
//				print();
//				break;
//			case 'a':
//				addNewContact();
//				break;
//			case 'd':
//				findContact();
//				break;
//			case 's':
//				findContact();
//				break;
//			case '0':
//				system("cls");
//				break;
//			}
//		}
//	}
//
//};
//
////void f2() {
////	PhoneBook *a = new PhoneBook();
////	string name, phone, info;
////	cin >> name >> phone >> info;
////	a->add(name, phone, info);
////	cin >> name >> phone >> info;
////	a->add(name, phone, info);
////	//size() - метод класса вектор, который возвращает размер вектора
////	for (int i = 0; i < a->contacts->size(); i++) {
////		cout << a->contacts->at(i).getName() << endl;
////		cout << a->contacts->at(i).getPhone() << endl;
////		cout << a->contacts->at(i).getInfo() << endl;
////	}
////	delete a;
////}
//int main()
//{
//
//	PhoneBook a;
//
//	a.menu();
//
//
//
//	/*if (a.getName() == b.getName()) {
//
//	}*/
//	system("pause");
//	return 0;
//}
//
//
