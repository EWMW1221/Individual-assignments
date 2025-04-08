#include <iostream>
using namespace std;

// Iterative Binary Search (O(log n) time, O(1) space)
int binarySearchIterative(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;  // Prevents overflow
        
        if (arr[mid] == target) 
            return mid;
        else if (arr[mid] < target) 
            left = mid + 1;   // Search right half
        else 
            right = mid - 1;  // Search left half
    }
    return -1;  // Not found
}

// Recursive Binary Search (O(log n) time, O(log n) space)
int binarySearchRecursive(int arr[], int left, int right, int target) {
    if (left > right) 
        return -1;  // Base case: not found
    
    int mid = left + (right - left) / 2;
    
    if (arr[mid] == target) 
        return mid;
    else if (arr[mid] < target) 
        return binarySearchRecursive(arr, mid + 1, right, target);  // Right half
    else 
        return binarySearchRecursive(arr, left, mid - 1, target);   // Left half
}

// Wrapper for recursive search
int searchRecursive(int arr[], int size, int target) {
    return binarySearchRecursive(arr, 0, size - 1, target);
}

// Test both implementations
void testBinarySearch() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int targets[] = {23, 2, 91, 50};  // 50 doesn't exist
    
    cout << "Array: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << "\n\n";
    
    for (int target : targets) {
        cout << "Target: " << target << "\n";
        
        int iterResult = binarySearchIterative(arr, size, target);
        cout << "- Iterative: Index " << iterResult << "\n";
        
        int recResult = searchRecursive(arr, size, target);
        cout << "- Recursive: Index " << recResult << "\n\n";
    }
}

int main() {
    cout << "BINARY SEARCH COMPARISON\n";
    cout << "------------------------\n";
    
    testBinarySearch();
    
    cout << "Complexity Summary:\n";
    cout << "- Time: O(log n) for both approaches\n";
    cout << "- Space: O(1) (iterative) vs O(log n) (recursive)\n";
    
    return 0;
}