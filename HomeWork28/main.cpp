#include "Tree.hpp"



int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	Tree Tr{ "Apple",55,120 };
	std::cout << "Фруктовое дерево.\n";
	print_tree(Tr);
	std::cout << "Стоимость всех фруктов на дереве: " << full_price(Tr) << '\n';

	std::cout << "Введите количество фруктов -> ";
	std::cin >> n;
	std::cout << "Стоимость введенного количества фруктов: " << collect(Tr, n) << "\n\n";
	
	std::cout << "Обновленное фруктовое дерево.\n";
	print_tree(Tr);

	return 0;
}