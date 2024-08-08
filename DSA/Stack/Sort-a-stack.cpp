// ------------Sort a stack----------------------

// Function to insert the element x in a sorted manner into the stack s
void sortedInsert(stack<int> &s, int x)
{
    // If stack is empty or the element is greater than the top element, push it
    if(s.empty() or x > s.top())
    {
        s.push(x);
        return;
    }
    
    // Remove the top element and recursively insert the element in the remaining stack
    int temp = s.top();
    s.pop();
    sortedInsert(s, x);
    
    // Push back the removed element to its original position in the stack
    s.push(temp);
}

// Function to sort the stack in ascending order
void SortedStack::sort()
{
    // Base case: if stack is not empty
    if(!s.empty())
    {
        // Remove the top element and recursively sort the remaining stack
        int x = s.top();
        s.pop();
        sort();
        
        // Insert the removed element back into the stack in a sorted manner
        sortedInsert(s, x);
    }
}


// Time Complexity : O(N^2), where N is the number of elements in the stack . This is because of the nested loop which we are running while pushing back elements to the stack in sorted order.

// Space Complexity : O(N), where N is the number of elements in the stack. This is the space used by the stack data structure to store the elements. 
