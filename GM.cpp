#include <iostream>
#include <cmath>

using namespace std;

double geometricMean(int count) {
    double product = 1.0;
    double number;
    cout << "Enter " << count << " numbers:\n";
    for (int i = 0; i < count; ++i) {
        cin >> number;
        product *= number;
    }
    return pow(product, 1.0 / count);
}

int main() {
    int count;
    cout << "How many numbers do you want to enter? ";
    cin >> count;
    double result = geometricMean(count);
    cout << "Geometric mean: " << result << endl;
    return 0;
}
    
