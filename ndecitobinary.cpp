#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  // Check if the number is negative.
  bool isNegative = n < 0;

  // Convert the number to positive.
  if (isNegative) {
    n = -n;
  }

  // Create an array to store the binary representation of the number.
  int binary[32];
  int i = 0;
  while (n > 0) {
    binary[i++] = n % 2;
    n /= 2;
  }

  // Print the binary representation of the number.
  for (int j = i - 1; j >= 0; j--) {
    cout << binary[j];
  }

  // Print a negative sign if the number is negative.
  if (isNegative) {
    cout << '-';
  }

  return 0;
}
