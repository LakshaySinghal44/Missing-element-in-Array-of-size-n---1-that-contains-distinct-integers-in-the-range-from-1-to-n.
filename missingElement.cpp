class Solution {
public:
 int missingNumber(vector<int>& arr) {
     int n = arr.size() + 1;  // Total number of elements from 1 to n
     
     // XOR of all numbers from 1 to n
     int totalXOR = 0;
     for (int i = 1; i <= n; i++) {
         totalXOR ^= i;
     }

     // XOR of all elements in the array
     int arrXOR = 0;
     for (int i = 0; i < arr.size(); i++) {
         arrXOR ^= arr[i];
     }
     
     // The missing number is the XOR of totalXOR and arrXOR
     return totalXOR ^ arrXOR;
 }
};
