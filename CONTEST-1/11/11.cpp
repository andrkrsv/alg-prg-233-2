#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double distAB = abs(b - a);
    double distAC = abs(c - a);

    if (distAB < distAC)
    {
        cout << "B " << distAB << endl;
    }
    else
    {
        cout << "C " << distAC << endl;
    }

    return 0;
}
