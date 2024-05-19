#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

bool isIncreasing(int num) {
    string s = to_string(num);
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] >= s[i + 1])
            return false;
    }
    return true;
}

bool isDecreasing(int num) {
    string s = to_string(num);
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] <= s[i + 1])
            return false;
    }
    return true;
}

int countPrimeIncDecNumbers(int n) {
    int count = 0;
    int start = pow(10, n - 1);
    int end = pow(10, n);
    for (int i = start; i < end; i++) {
        if (isPrime(i) && (isIncreasing(i) || isDecreasing(i)))
            count++;
    }
    return count;
}

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int n;
        cin >> n;
        cout << countPrimeIncDecNumbers(n) << endl;
    }
    return 0;
}