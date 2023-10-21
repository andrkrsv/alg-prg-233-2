#include <iostream>
#include <string>
#include <stack>

std::string poluchit_stroku(char konets = '\n') {
	std::string tekst;
	std::getline(std::cin, tekst, konets);
	return tekst;
}

bool predikat(std::string tekst) {
	std::stack<char> stek;
	for (char elem : tekst) {
		switch (elem) {
			case '(':
			case '[':
			case '{':
				stek.push(elem);
				break;
			case ')':
				if (stek.empty() || stek.top() != '(') return false;
				stek.pop();
				break;
			case ']':
				if (stek.empty() || stek.top() != '[') return false;
				stek.pop();
				break;
			case '}':
				if (stek.empty() || stek.top() != '{') return false;
				stek.pop();
				break;
		}
	}
	return stek.empty();
}

int main() {
	std::string tekst = poluchit_stroku('!');
	predikat(tekst) ? std::cout << "DA" : std::cout << "NET";
}
