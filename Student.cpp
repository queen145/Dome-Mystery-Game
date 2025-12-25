#include <iostream>
using namespace std;  // do not change the student class!!!!!!!!!!!!!!!!!!!!!!!!
class Student {
private:
	string name, quote;
	bool sus;
public:

	Student(string n, string q) {
		name = n;
		quote = q;
		sus = 0;

	}

    string getname(){
        return name;
    }
    
    string getqoute(){
        return quote;
    }

	void show() {
		cout << name << " " << quote;
	}
	void setSus() {
		sus = 1;
	}
	bool isSus() {
	//	cout << "Sus ";
		return sus;
	}
};
