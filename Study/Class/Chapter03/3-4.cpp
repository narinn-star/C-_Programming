#include <iostream>
using namespace std;

class CoffeeMachine {
	int coffee, water, sugar;
public:
	CoffeeMachine() {
		coffee = 0;
		water = 0;
		sugar = 0;
	}
	CoffeeMachine(int c, int w, int s) {
		coffee = c;
		water = w;
		sugar = s;
	}
	void drinkEspresso() {
		coffee -= 1;
		water -= 1;
	}
	void drinkAmericano() {
		coffee -= 1;
		water -= 2;
	}
	void drinkSugarCoffee() {
		coffee -= 1;
		water -= 2;
		sugar -= 1;
	}
	void show() {
		cout << "Ŀ�� �ӽ� ����, Ŀ��:" << coffee << "\t��:" << water << "\t����:" << sugar << endl;
	}
	void fill() {
		coffee = 10;
		water = 10;
		sugar = 10;
	}
};

int main() {
	CoffeeMachine java(5, 10, 3); //Ŀ��, ��, ����
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}