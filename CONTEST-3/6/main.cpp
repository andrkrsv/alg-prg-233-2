#include <iostream>
#include <string>
#include <map>
int main(){
    std::map<std::string, long> balans_epta;
    
    int kolvodebilov;
    std::cin >> kolvodebilov;
    
    std::string RAW_Data;
    for(int i = 0; i < kolvodebilov; i++){
        std::cin >> RAW_Data;
        
        size_t nuetotipoda = RAW_Data.find(';');
        std::string bukavilogina = RAW_Data.substr(0, nuetotipoda);
        std::string instasamka = RAW_Data.substr(nuetotipoda+1);
        
        balans_epta[bukavilogina] = std::stoi(instasamka);
//        std::cout << nuetotipoda << " ";
//        std::cout << bukavilogina << " ";
//        std::cout << instasamka << " ";
//        std::cout << " !!! " << balans_epta["ydfnj"] << " !!! ";
        }
    std::cin >> kolvodebilov;
    std::string bukavilogina1;
    for (int i = 0;i < kolvodebilov; i++){
        std::cin >> bukavilogina1;
        std::cout << balans_epta[bukavilogina1] << " ";
    }
}
