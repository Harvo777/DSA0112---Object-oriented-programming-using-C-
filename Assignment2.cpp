#include <iostream>
using namespace std;

enum class Zone { Inner, Middle, Outer };
constexpr long long BASE_FARE_PAISE[] = {1000, 2000, 3000};
constexpr int PEAK_SURCHARGE_PERCENT = 20;
constexpr long long MIN_BALANCE_PAISE = 5000;

int main() {
    Zone zone = Zone::Outer;
    int index = static_cast<int>(zone);
    long long base = BASE_FARE_PAISE[index];
    long long peakFare = base + base * PEAK_SURCHARGE_PERCENT / 100;

    cout << "Base fare (paise): " << base << '\n';
    cout << "Peak fare (paise): " << peakFare << '\n';
    cout << "Minimum balance (paise): " << MIN_BALANCE_PAISE << '\n';
}
