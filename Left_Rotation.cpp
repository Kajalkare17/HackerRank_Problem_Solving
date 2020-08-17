/*
LEFT ROTATION
Input Format

The first line contains two space-separated integers denoting the respective values of
(the number of integers) and  (the number of left rotations you must perform).
The second line contains  space-separated integers describing the respective elements of the
array's initial state.

Output Format

Print a single line of  space-separated integers denoting the final state of the array after performing 
left rotations.

Sample Input

5 4
1 2 3 4 5
Sample Output

5 1 2 3 4

we will take input of array from (size of array - no. of rotations) to n-1.
and then from 0th index to (size of array - no. of rotations).
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=n-k;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-k;i++)
    cin>> arr[i];
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}

