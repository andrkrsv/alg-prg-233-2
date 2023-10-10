//
//  main.cpp
//  CONTEST 3
//
//  Created by Andrei Kurasov on 08.10.2023.
//

#include <iostream>
#include <algorithm>

int main() {
    
    int dlina1,dlina2;
    
    std::cin >> dlina1;
    int mass1[int (dlina1)];
    
    for (int i = 0; i < dlina1; i++){
        std::cin >> mass1[i];
    }
    
    std::cin >> dlina2;
    int mass2[int (dlina2)];
    
    for (int i = 0; i < dlina2; i++){
        std::cin >> mass2[i];
    }
    int bigdlinna = dlina1 + dlina2;
    int bigmass[bigdlinna];
    for (int i = 0; i < bigdlinna; i++){
        if (i<dlina1){
            bigmass[i]=mass1[i];
        }
        else{
            bigmass[i]=mass2[i-dlina1];
        }
    }
   
    std::sort(bigmass, bigmass+bigdlinna);
    
    for (int i = 0; i < bigdlinna; i++){
        std::cout << bigmass[i] << " ";
    }
    
    std::cout << std::endl;
    
    
//    //test
//
//    std::cout <<" d1 " << dlina1 <<" d1end ";
//    for (int i = 0; i < dlina1; i++){
//        std::cout << " m1 " << mass1[i];
//    }
//
//    std::cout <<" d2 " << dlina2 <<" d2end ";
//    for (int i = 0; i < dlina2; i++){
//        std::cout <<" m2 " << mass2[i];
//    }
//    
//    std::cout << std::endl;
//    std::cout <<" bdend " << bigdlinna <<" bdend ";
//    for (int i = 0; i < bigdlinna; i++){
//        std::cout <<" bm " << bigmass[i];
//    }
    return 0;
}
