second-or-third-largest-element
##student information
**Name**:eyerus wesene 
**student id**:RMNS-4199-/23 
**course**:data structure and algorithm

##Algorithm 
initialize Variables: 1.Set first and second to a very small value (or the minimum possible integer).
Iterate through the List: 2.For each number in the list:
If the number is greater than first: a.Set second to first. b.Update first to the current number.
Else if the number is greater than secondand not equal to first: a.Update second to the current number. Return the Result: 3.If second is still the initial very small value, return an indication that the second largest number doesn't exist (e.g., -1).
4.Otherwise, return second.

Algorithm to Find the Third Largest Element Initialize Variables: 5. Set first, second, and third to a very small value (or the minimum possible integer). Iterate through the List: 6. For each number in the list: 1. If the number is greater than first: 1. Set third to second. 2. Set second to first. 3. Update first to the current number. 2. Else if the number is greater than secondand not equal to first: 1. Set third to second. 2. Update second to the current number. 3. Else if the number is greater than thirdand not equal to first or second: 1. Update third to the current number.

Return the Result: 7.If third is still the initial very small value, return an indication that the third largest number doesn't exist (e.g., -1). 8.Otherwise, return third. Overall Algorithm for User Choice -Input the Number of Elements: 9. Prompt the user to enter the number of elements they want to input. -Input the Elements: 10. Create an empty list or array. 11. Loop through and allow the user to enter each number. -User Choice: 12. Prompt the user to enter 1 for the second largest number or 2 for the third largest number. -Call Appropriate Function: 13. Based on user choice, call the function to find the second or third largest number. 14. Print the result.