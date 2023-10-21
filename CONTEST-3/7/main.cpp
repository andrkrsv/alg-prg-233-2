#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <vector>
#include<algorithm>

std::map<std::string, int> ChitatFayl(const std::string Put , std::string tsel) {
	std::map<std::string, int> Slova;
	std::ifstream fayl(Put);
	bool flag = true;
	while (!fayl.eof()) {
		std::string stroka="";
		fayl >> stroka;
		if (stroka == tsel) {
			flag = false;
			continue;
		}
		if (!flag) {
			Slova[stroka]++;
			flag = true;
		} 
	}
	return Slova;
}

bool sravnenie(std::pair<std::string, int >& levo, std::pair<std::string, int>& pravo) {
	if (levo.second > pravo.second) return true;
	if (levo.second < pravo.second) return false;
	return levo.first < pravo.first;
}

void pechat(std::vector < std::pair<std::string, int>> MoyaKarta) {
	int schet=0;
	for (std::pair<std::string, int> elem : MoyaKarta) {
		if (schet < 3) {
			std::cout << elem.first<<" ";
			schet++;
		}
	}
	if (schet == 0)std::cout << "-";
}

int main() {
	std::string tsel;
	std::cin >> tsel;
	auto VseSlova_m = ChitatFayl("data.txt", tsel);
	std::vector<std::pair<std::string, int>> OtsortirovannyeSlova(VseSlova_m.begin(), VseSlova_m.end());
	std::sort(OtsortirovannyeSlova.begin(), OtsortirovannyeSlova.end(), sravnenie);
	pechat(OtsortirovannyeSlova);
}
