// Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array.

// --------------Better Approach (using Hashing)----------------
// Intuition: Using the hashing technique, we will store the frequency of each element of the given array. Now, the number( i.e. between 1 to N) for which the frequency will be 0, will be returned.

// Time Complexity: O(N) + O(N) ~ O(2*N),  where N = size of the array+1.
// Space Complexity: O(N), Here we are using an extra hash array of size N+1.

// ------------------Optimal Approach 1--------------------
// Intuition: We know that the summation of the first N numbers is (N*(N+1))/2. We can say this S1. Now, in the given array, every number between 1 to N except one number is present. So, if we add the numbers of the array (say S2), the difference between S1 and S2 will be the missing number. Because, while adding all the numbers of the array, we did not add that particular number that is missing.

// Time Complexity: O(N), where N = size of array+1.
// Space Complexity: O(1) as we are not using any extra space.

// ------------------Optimal Approach 2--------------------
// XOR Approach:
// Intuition: Two important properties of XOR are the following:

// Property 1 --> XOR of two same numbers is always 0 i.e. a ^ a = 0.
// Property 2 --> XOR of a number with 0 will result in the number itself i.e. 0 ^ a = a. 

// Now, let’s XOR all the numbers between 1 to N.
// xor1 = 1^2^.......^N
// Let’s XOR all the numbers in the given array.
// xor2 = 1^2^......^N (contains all the numbers except the missing one).

// Now, if we again perform XOR between xor1 and xor2, we will get:
// xor1 ^ xor2 = (1^1)^(2^2)^........^(missing Number)^.....^(N^N)
// Here all the numbers except the missing number will form a pair and each pair will result in 0 according to the XOR property. The result will be = 0 ^ (missing number) = missing number.

// Time Complexity: O(N), where N = size of array+1.
// Space Complexity: O(1) as we are not using any extra space.