#include <iostream>

double calculateMean(const double arr[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    const int size = 5; // Size of the array
    double numbers[size] = {1.2, 3.4, 5.6, 7.8, 9.0}; // Example numbers
    double mean = calculateMean(numbers, size);
    std::cout << "Arithmetic mean: " << mean << std::endl;
    return 0;
}
