/*
Input Format

The first line contains a single integer, , denoting the number of queries.
Each line  of the  subsequent lines contains a single query in the form described
in the problem statement above. All three queries start with an integer denoting the query,
but only query  is followed by an additional space-separated value, , denoting the value to be enqueued.

Constraints

It is guaranteed that a valid answer always exists for each query of type .
Output Format

For each query of type , print the value of the element at the front of the queue on a new line.

Sample Input

10
1 42
2
1 14
3
1 28
3
1 60
1 78
2
2
Sample Output

14
14

Approach:- In enque operation the new element is entered at the top of stack,
in deque operation, if stack2 is empty, and stack1 is not empty then push all 
elements from stack1 to stack2
then pop the element and return it
*/

#include <stack>
#include <iostream>
using namespace std;

int main() {
    stack<int> s1,s2;
    int Q;  //query
    cin >> Q;
    while(Q--)
    {
        int type, x;
        cin >> type; //type of query
        if(type == 1)
        {
            cin >> x;
            s1.push(x);
        }    
        else 
        {
           if(s2.empty())
           { // move all the elements from "s1" stack to "s2" stack
               while(!s1.empty())
               {
                   s2.push(s1.top());
                   s1.pop();
               }   
            }    
           if(!s2.empty())
           {
               if(type == 2) 
			   s2.pop();
               if(type == 3) 
			   cout << s2.top()<<endl;
           }  
        }   
    }    
    return 0;
}

