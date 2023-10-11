#include "Tree.hpp"

void print_tree(const Tree& T){
	std::cout << "Название фруктов: " << T.fruit << '\n';
	std::cout << "Количество фруктов: " << T.fruits_number << '\n';
	std::cout << "Цена: " << T.fruits << '\n';
}

int full_price(const Tree& T){
	return T.fruits_number * T.fruits;
}

int collect(Tree& T, int num){
	if (num >= T.fruits_number) {
		T.fruits_number = 0;
		return full_price(T);
	}

	T.fruits_number -= num;
	return T.fruits * num;
}
