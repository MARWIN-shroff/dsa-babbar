#include <bits/stdc++.h>
using namespace std;
int tofindKthSmallest(vector<int> const &v, int k)
{ 
    priority_queue<int, vector<int>> pqueue(v.begin(), v.begin() + k);   
    for (int i = k; i < v.size(); i++)
    {        
        if (v[i] < pqueue.top())
        {            
            pqueue.pop();
            pqueue.push(v[i]);
        }
    }  
    return pqueue.top();
}
int main()
{
    vector<int> input = { 50,10,75,55,45};
    const size_t k = 2;
    cout << "The kth smallest array element is " << tofindKthSmallest(input, k);
    return 0;
}

/* This is solution of kth small using max heap. 
1.Create a priorty queue and insert all the elements.
2.Check if the current element is smaller than root of the heap.
3.if step 2 occurs then replace current element will replaced by root.
*/
