/*
Sample Input

3
{[()]}
{[(])}
{{[[(())]]}}
Sample Output

YES
NO
YES

Algorithm:

Declare a character stack S.
Now traverse the expression string exp.
If the current character is a starting bracket (‘(‘ or ‘{‘ or ‘[‘) then push it to stack.
If the current character is a closing bracket (‘)’ or ‘}’ or ‘]’) then pop from stack and if the popped character is the matching starting bracket then fine else parenthesis are not balanced.
After complete traversal, if there is some starting bracket left in stack then “not balanced”
*/

#include <iostream>
using namespace std;
#include<stack>

bool areParanthesisBalanced(string expr);

int main() {
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
    string expr;
    cin>>expr;
    if (areParanthesisBalanced(expr)) 
        cout << "YES"<<endl; 
    else
        cout << "NO"<<endl; 
    }
    return 0; 

}

bool areParanthesisBalanced(string expr)
{
    stack<char> s;
    char x;
    int i;
    for(int i=0; i<expr.length(); i++)
    {
        if(expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
        {
            s.push(expr[i]);
            continue;
            
        }
        if(s.empty())
        return false;
        
        switch (expr[i])
        {
            case ')':
            x = s.top();
            s.pop();
            if(x == '{' || x== '[')
            return false;
            break;
            
            case '}':
            x = s.top();
            s.pop();
            if(x == '(' || x== '[')
            return false;
            break;
            
            case ']':
            x = s.top();
            s.pop();
            if(x == '(' || x== '{')
            return false;
            break;
        }
    }
    return (s.empty());
}

