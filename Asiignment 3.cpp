#include <climits>
#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "sizeof(bool) = " << sizeof(bool) << " byte(s)\n";
    cout << "sizeof(char) = " << sizeof(char) << " byte(s)\n";
    cout << "sizeof(int) = " << sizeof(int) << " byte(s)\n";
    cout << "sizeof(long long) = " << sizeof(long long) << " byte(s)\n";
    cout << "sizeof(float) = " << sizeof(float) << " byte(s)\n";
    cout << "sizeof(double) = " << sizeof(double) << " byte(s)\n";

    constexpr long long farePaise = 3600;
    constexpr long long journeys = 3000000;
    long long totalPaise = farePaise * journeys;

    cout << "INT_MAX = " << INT_MAX << '\n';
    cout << "Total for 3,000,000 journeys (paise) = " << totalPaise << '\n';
    cout << "Total (rupees) = " << totalPaise / 100 << '\n';

    double inaccurateStyle = 0.1 + 0.2;
    cout.precision(17);
    cout << "0.1 + 0.2 using double = " << inaccurateStyle << '\n';
}
