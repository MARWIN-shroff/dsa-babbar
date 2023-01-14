#include <bits/stdc++.h>

using namespace std;
void reversearray(int arr[], int start, int end){
    if(start>=end)
    return;
    
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reversearray(arr,start+1,end-1);
}
void printarray(int arr[], int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    printarray(arr,6);
    reversearray(arr,0,5);
    cout<<"Reversed array is: "<<endl;
    printarray(arr,6);

    return 0;
}
/* This question is about array reversal.
Suppose we have been provided array as {1,2,3,4,5,6} and we have to reverse it and our expected output would be {6,5,4,3,2,1}
So the logic is simple to create a reversal function in which we will declare a start element,end element.
1.Initialize start and end indexes as 0,n-1 respectively. 
2.Then swap start and end using temp. 
3.After the first and last element swap, do a recursive call and repeat it till all the elements are reversed.
4.Use this as a recursive call:- reversearray(arr,start+1,end-1);
5.Time complexity would be O(n).


