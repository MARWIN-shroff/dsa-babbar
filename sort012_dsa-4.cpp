#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
    void sort012(int a[], int n)
    {
        int low = 0,mid = 0,high = n-1;
        while(mid<=high)
        {
            switch(a[mid])
            {
                case 0:
                    swap(a[low],a[mid]);
                    low++,mid++;
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(a[mid],a[high]);
                    high--;
            }
        }
    }   
    
};

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

/*To sort three numbers 0,1,2 without sorting we can follow method known as Dutch national lag algorithm.
Given an array A[] consisting of only 0s, 1s, and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.

This problem is also the same as the famous “Dutch National Flag problem”. The problem was proposed by Edsger Dijkstra. The problem is as follows:
he problem was posed with three colors, here `0′, `1′ and `2′. The array is divided into four sections: 
arr[1] to arr[low – 1]
arr[low] to arr[mid – 1]
arr[mid] to arr[high – 1]
arr[high] to arr[n]
If the ith element is 0 then swap the element to the low range.
Similarly, if the element is 1 then keep it as it is.
If the element is 2 then swap it with an element in high range.
Follow the steps below to solve the given problem:

Keep three indices low = 1, mid = 1, and high = N and there are four ranges, 1 to low (the range containing 0), low to mid (the range containing 1), mid to high (the range containing unknown elements) and high to N (the range containing 2).
Traverse the array from start to end and mid is less than high. (Loop counter is i)
If the element is 0 then swap the element with the element at index low and update low = low + 1 and mid = mid + 1
If the element is 1 then update mid = mid + 1
If the element is 2 then swap the element with the element at index high and update high = high – 1 and update i = i – 1. As the swapped element is not processed
Print the array.*/
