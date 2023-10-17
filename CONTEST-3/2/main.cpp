#include <iostream>
#include <string>

struct Stroka {
    std::string tekst;
    char end = '\n';
};

Stroka poluchit_stroku() {
    Stroka stroka;
    std::getline(std::cin, stroka.tekst, stroka.end);
    return stroka;
}

bool predikat(std::string tekst) {
    int schetchik_1 = 0, schetchik_2 = 0, schetchik_3=0;
    std::string pred_sym = "";
    for (char elem : tekst) {
        if (schetchik_1 < 0 || schetchik_2 < 0 || schetchik_3 < 0) return false;
        if (elem == '(') {
            schetchik_1++;
            pred_sym = ")"+ pred_sym;
            continue;
        }
        if (elem == ')') {
            schetchik_1--;
            if (pred_sym[0] != elem) return false;
            pred_sym = pred_sym.substr(1);
            continue;
        }

        if (elem == '[') {
            schetchik_2++;
            pred_sym = "]"+ pred_sym;
            continue;

        }
        if (elem == ']') {
            schetchik_2--;
            if (pred_sym[0] != elem) return false;
            pred_sym = pred_sym.substr(1);
            continue;

        }
        if (elem == '{') {
            schetchik_3++;
            pred_sym = "}"+ pred_sym;
            continue;

        }
        if (elem == '}') {
            schetchik_3--;
            if (pred_sym[0] != elem) return false;
            pred_sym = pred_sym.substr(1);
            continue;

        }

    }
    return schetchik_1 == 0 && schetchik_2 == 0 && schetchik_3 == 0;
}

int main() {
    Stroka stroka = poluchit_stroku();
    bool result = predikat(stroka.tekst);
    result ? std::cout << "YES" : std::cout << "NO";
}
