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
