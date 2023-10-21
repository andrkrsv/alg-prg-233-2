#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

typedef std::pair<std::string, int> par; 

void poluchit_kartu(int n, std::map<std::string, int>& MoyaKarta) {
	for (int i = 0; i < n; i++) {
		std::string vremennaya;
		std::cin >> vremennaya;
		MoyaKarta[vremennaya] += 1;
	}
}

std::vector<std::string> poluchit_maksimum(std::map<std::string, int>& MoyaKarta) {
	int maksimum = -1;
	std::vector<std::string> NoviyVektor;
	for (par element : MoyaKarta) {
		if (maksimum < element.second) maksimum = element.second;
	}
	for (par element : MoyaKarta) {
		if (element.second == maksimum) NoviyVektor.push_back(element.first);
	}
	return NoviyVektor;
}

int main() {
	int n;
	std::cin >> n;
	std::map<std::string, int> MoyaKarta;
	poluchit_kartu(n, MoyaKarta);
	std::vector<std::string> NoviyVektor = poluchit_maksimum(MoyaKarta);
	std::sort(NoviyVektor.begin(), NoviyVektor.end());
	for (auto& element : NoviyVektor) {
		std::cout << element << " ";
	}
}
