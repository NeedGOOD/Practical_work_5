#include <iostream>
#include <cmath>	//Обновленная библиотека математических функций для c++

int main(int argc, char** argv) {
	std::cout << "\t\t<Practical work 5.1>\n";	//Учимся использовать if
	float a, b, c, x, F = 0;
	std::cout << "\nF=a*x^2+b/c - at x<1 and c!=0;\n";
	std::cout << "F=(x-a)/(x-c)^2 - at x>1.5 and c=0;\n";
	std::cout << "F=(x)^2/(c)^2 - in other cases.\n";
	std::cout << "Enter number a: ";
	std::cin >> a;
	std::cout << "Enter number b: ";
	std::cin >> b;
	std::cout << "Enter number c: ";
	std::cin >> c;
	std::cout << "Enter number x: ";
	std::cin >> x;
	std::cout << '\n';
	
	if (x < 1 && c != 0) {
		F = (a * pow(x,2)) + (b/c);
		std::cout << "First F=" << F << '\n';
	} else if (x > 1.5 && c == 0 && x - c != 0) {	//Делить на 0 нельзя
		F = (x - a) / pow((x - c),2);
		std::cout << "Second F=" << F << '\n';
	} else if (pow(c,2) != 0) {	//Делить на 0 нельзя
		F = pow(x,2) / pow(c,2);
		std::cout << "Third F=" << F << '\n';
	} else {	//Если не подходит ни одно условие, тогда мы выходим на "делить на 0 нельзя"
		std::cout << "You cannot divide by zero\n";
	}
	return 0;
}
