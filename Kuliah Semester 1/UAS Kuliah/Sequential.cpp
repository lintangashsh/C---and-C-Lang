#include <iostream>
#include <algorithm> // Include for std::min function (optional)

using namespace std;

int main() {
  // Define the array
  int arr[] = {5, 2, 8, 3, 2};
  int n = sizeof(arr) / sizeof(arr[0]); // Array size

  // Initialize variables
  int minIndex = 0;
  int minValue = arr[0]; // Assume first element is minimum

	// Loop through the array
  for (int i = 1; i < n; ++i) {
    // Check if current element is smaller than current minimum
    if (arr[i] < minValue) {
      // Update minimum value and index
      minValue = arr[i];
      minIndex = i;
    }
  }

  // Print the results
  cout << "Minimum value in the array: " << minValue << endl;
  cout << "Found at index: " << minIndex << endl;

  return 0;
}
