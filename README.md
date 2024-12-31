# Missing-element-in-Array-of-size-n-1-that-contains-distinct-integers-in-the-range-from-1-to-n.
I have used XOR approach in this code to find the missing element in array.
XOR Approach:
XOR of all numbers from 1 to n gives us a result that includes the missing number.
XOR of all elements in the array also gives us a result, but missing the element.
XOR of these two results will cancel out all the numbers that appear twice and leave only the missing number.
