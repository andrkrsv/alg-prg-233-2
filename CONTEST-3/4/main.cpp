#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

std::map<std::string, int> dobavit_v_vektor(int n, std::vector<std::string>& slova) {
    std::map<std::string, int> schet_slov;
    for (int i = 0; i < n; i++) {
        std::string vremennaja;
        std::cin >> vremennaja;
        schet_slov[vremennaja]++;
        slova.push_back(vremennaja);
    }
    return schet_slov;
}


std::vector<std::string> peresechenie(std::map<std::string, int>& pervyj, std::map<std::string, int>& vtoroj) {
    std::vector<std::string> rezultat;
    for (const auto& kljuch : pervyj) {
        if (vtoroj.count(kljuch.first) == 1) rezultat.push_back(kljuch.first);
    }
    return rezultat;
}

int main() {
    int n, m;
    std::cin >> n;
    std::vector<std::string> pervye_slova;
    std::vector<std::string> vtorje_slova;
    std::map<std::string, int> vse_iz_pervogo, vse_iz_vtorogo;
    
    vse_iz_pervogo = dobavit_v_vektor(n, pervye_slova);
    std::cin >> m;

    vse_iz_vtorogo = dobavit_v_vektor(m, vtorje_slova);
    
    std::vector<std::string> itog;
    itog = peresechenie(vse_iz_pervogo, vse_iz_vtorogo);
    std::sort(itog.begin(), itog.end());

    if (itog.size() == 0) std::cout << -1;
    else {
        for (const auto& jelement : itog) {
            std::cout << jelement << " ";
        }
    }
}
