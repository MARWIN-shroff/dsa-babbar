#include <bits/stdc++.h>

using namespace std;
struct Pair{
    int max;
    int min;
};
Pair getminmax(int arr[],int n){
    struct Pair minmax;
    if(n==1){
        minmax.max = arr[0];
        minmax.min = arr[1];
        return minmax;
    }
    if(arr[0]>arr[1]){
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else{
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
    
    for(int i = 2;i<n;i++){
        if(arr[i]>minmax.max){
            minmax.max = arr[i];
        }
        else if(arr[i]<minmax.min){
            minmax.min = arr[i];
        }
    }
    return minmax;
}
int main()
{
    int arr[] = {100,200,564,256,312};
    int n = 5;
    struct Pair minmax = getminmax(arr,n);
    cout<<"Minimum number is: "<<minmax.min<<endl;
    cout<<"Maximum number is: "<<minmax.max<<endl;

    return 0;
}


/* This is a minmax problem in which we have to find the minimum and maximum number from an array.
1.Create a struct.
2.Put min max values.
3.Create a struct for minmax.
4.Check for a single value where array size is 1 so the same value will be minimum and maximum.
5.For two values check the greatest among them and assign minimum and maximum number respectively.
6.For more than 2 elements in an array, compare the current value to the maximum at that time. If the current one is greater than maxmimum, then arr[i] = minmax.max;
7.Check the same condition for minimum.
8.Print the minimum and maximum.
