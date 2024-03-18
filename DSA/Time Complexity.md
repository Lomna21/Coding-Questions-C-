# Simple loop algorithm
# for(i = 0; i <= n; i++){
    statements 
} *T.C -> O(N)*

# for (i = n; i <= 0; i--){
    statements
}*T.C -> O(N)*

# for (i = 0; i <= n; i=i+2){
    statements
} *T.C -> O(N)*

> Consider a and b both are positive integers
# while (a != b) {
    if (a > b)
        a = a - b;
    else
        b = b - a;
}
*Time complexity = O(1) in best case and O(max(a, b)) worst case.*

# for(int i=0;i*i<n;i++)
    cout<<"GeeksforGeeks";
*Time complexity = O(√n).*

# Multiple/Fractional loop algorithm

# for (i = 1; i < n; i=i*2){
    statement # Some logic that the algorithm is performing.
}
Number of loops:   i:
1                  2
2                  2*2 or 2^2
3                  2^3
4                  2^4
.                   .
.                   .
.                   .
k                  2^k
So here when the loop runs k times i will have the value of 2^k. 
Since the loop is running k times we know at the last loop the value of i was equal to n which cause the loop to break.
We know that the value of i at the kth run was 2^k, so when the loop broke at i= n we can also say that 2^k = n
Since k is the number of times the loop runs we need to find k to get the time complexity. We know that 2^k = n, now if we take log base 2 on either sides we get k = log2(n). *So we can now say that the loop runs log2(n) times.*

# Multiple/Fractional loop algorithm
# for (i = n; i < 1; i=i/2){
    statement # Some logic that the algorithm is performing.
}
This is exactly similar as the reverse loop we looked at in the previous section, so the number of times the loop will execute will also be log2(n) times. *Therefore the time complexity will be O(log2(n)).*

**for i=i*3 ==> T.C = O(log3(N))**
**for i=i/5 ==> T.C = O(log5(N))**

# for (int i = 1; i < n; i = i * x) 
//or for(int i = n; i >=1; i = i / x)
    cout << "GeeksforGeeks";
*Time complexity = O(logxn).*

# for (int i = 0; i < n / 2; i++)
    for (int j = 1; j + n / 2 <= n; j++)
        for (int k = 1; k <= n; k = k * 2)
            cout << "GeeksforGeeks";
Time complexity of 1st for loop = O(n/2) ⇒ O(n).
Time complexity of 2nd for loop = O(n/2) ⇒ O(n).
Time complexity of 3rd for loop = O(log2n)
*Time complexity = O(n2log2n).*

# Summation loop algorithm
p = 0
# for (i = 1; p <= n; i++){
    p = p + i# Some logic that the algorithm is performing.
}
i:                 p:
1                  1
2                  1+2 = 3
3                  1+2+3 = 6
4                  1+2+3+4 = 10
.                   .
.                   .
.                   .
k                  1+2+3+4+...+k => k(k+1)/2 

*k(k+1)/2 is the formula for the sum of the first k natural numbers.
So here when the loop runs k times p will have the value of k(k+1)/2 which is (k^2 + k)/2 or we can approximate it to k^2.
Since the loop is running k times we know at the last loop the value of p was greater than n which caused the loop to break.
We know that the value of p at the kth run was k^2, so when the loop broke at p>n we can also say that k^2 > n.
Since k is the number of times the loop runs we need to find k to get the time complexity. We know that k^2 > n, now if we take square root on either sides we get k = sqrt(n). *So we can now say that the loop runs sqrt(n) times.*

# Worst Case time complexity of different data structures for different operations

Data structure	    Access	    Search	    Insertion	    Deletion
Array	            O(1)	    O(N)	    O(N)	        O(N)
Stack	            O(N)	    O(N)	    O(1)	        O(1)
Queue	            O(N)	    O(N)	    O(1)	        O(1)
Singly Linked list	O(N)	    O(N)	    O(N)	        O(N)
Doubly Linked List	O(N)	    O(N)	    O(1)	        O(1)
Hash Table	O(N)	O(N)	    O(N)	    O(N)
Binary Search Tree	O(N)	    O(N)	    O(N)	        O(N)
AVL Tree	        O(log N)	O(log N)	O(log N)	    O(log N)
Binary Tree	        O(N)	    O(N)	    O(N)	        O(N)
Red Black Tree	    O(log N)	O(log N)	O(log N)	    O(log N)