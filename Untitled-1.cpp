#include <iostream>
using namespace std;
class Mammals{
	public:
		void display1() {
			cout << "I am mammal" << endl;
		}
};
class MarineAnimals {
	public:
		void display2() {
			cout << "I am a marine animal" << endl;
		}
};
class BlueWhale : public Mammals, public MarineAnimals {
	public:
		void display3() {
			cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
		}
};
int main()
{
	Mammals m;  
	MarineAnimals ma;
	BlueWhale bw;
	m.display1(); 
	ma.display2(); 
	bw.display3();
	bw.display1();
	bw.display2();
	return 0;
}