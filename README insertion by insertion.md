
 # Pointer--By--insertion
 ## Student Information -
  **Name**: Eyerus wesene
  **Student ID**: RMNS-4199-/23
  **Course**: DSA
 ## ALGORITHM
 1.Start with the second element (i = 1) in the array of pointers (arr[]).
 2.Set the key as the pointer at the current index (arr[i]).
 3.Compare the value pointed to by key with the values pointed to by preceding pointers (arr[j]).
 4.Shift elements greater than key to the right until the correct position for key is found.
 Place the key in its correct position.
 5.Repeat steps 2–5 for all elements until the end of the array.
 6.The array is sorted in ascending order based on the values pointed to by the pointers.
 ## How to Run the code
 1.Clone the repository to your local machine. 
 2. Open the terminal and navigate to the repository directory. 
 3. Compile the C++ code using: ```bash
 g++ main.cpp 
 -o main Run the compiled program: 
 Output 
 The program will output:values pointer to by the pointer is 5,6,11,12,13