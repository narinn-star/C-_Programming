#include <iostream>
using namespace std;

class CoffeeMachine {
	int coffee;
	int water;
	int sugar;
public:
	CoffeeMachine() {
		coffee = 0;
		water = 0;
		sugar = 0;
	}
	CoffeeMachine(int C, int W, int S) {
		coffee = C;
		water = W;
		sugar = S;
	}
	void drinkEspresso() {
		coffee--;
		water--;
		sugar = sugar;
	}
	void drinkAmericano() {
		coffee--;
		water = water - 2;
		sugar = sugar;
	}
	void drinkSugarCoffee() {
		coffee--;
		water = water - 2;
		sugar--;
	}
	void fill() {
		coffee = 10;
		water = 10;
		sugar = 10;
	}
	void show() {
		cout << "커피 머신 상태, 커피 : " << coffee << " 물 : " << water << " 설탕 : " << sugar << endl;
	}
};

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}