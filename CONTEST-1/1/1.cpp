#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    cout << sqrt(12) * (1 - (1/3) + (1/(5 * pow(3,2))) - (1/(7*3 * pow(3,3))) + (1/(9*3 * pow(3,4))) - (1/(11 * pow(3,5))));
    return 0;
}
