# Binary Search Implementation
## Student Information
- Name: eyerus wesene 
- Student ID: RMNS-4199/23 
- Course: DSA
## Algorithm Description

### Iterative Binary Search
1. Initial Setup  
   - Start with two boundary pointers: left at index 0 and right at the last index
   - Ensure the input array is sorted in ascending order

2. Search Process  
   - Calculate the middle index: mid = left + (right - left) / 2  
     *(This formula prevents integer overflow)*  
   - Compare the middle element with the target:  
     - If equal: Return the index immediately  
     - If smaller: Move the left boundary to mid + 1  
     - If larger: Move the right boundary to mid - 1  

3. Termination  
   - Repeat until boundaries cross  
   - Return -1 if target not found  

### Recursive Binary Search
1. Base Case  
   - If the left boundary exceeds the right boundary, return -1  

2. Recursive Steps  
   - Calculate middle index using the same safe formula  
   - Return immediately if middle element matches target  
   - Otherwise, recursively search the appropriate half:  
     - Right half if target is larger (mid + 1 to right)  
     - Left half if target is smaller (left to mid - 1)  

## Complexity Analysis

| Aspect          | Iterative | Recursive |
|-----------------|-----------|-----------|
| Time        | O(log n)  | O(log n)  |
| Space       | O(1)      | O(log n)  |
| Best Case   | O(1)      | O(1)      |
| Worst Case  | O(log n)  | O(log n)  |