#include <iostream>

int main() {
    const int size = 5; // Size of the array
    double numbers[size] = {1.2, 3.4, 5.6, 7.8, 9.0}; // Example numbers

    // Calculate harmonic mean
    double reciprocalSum = 0.0;
    for (int i = 0; i < size; ++i) {
        reciprocalSum += 1.0 / numbers[i];
    }
    double harmonicMean = size / reciprocalSum;

    // Output the result
    std::cout << "Harmonic mean: " << harmonicMean << std::endl;
    
    return 0;
}
