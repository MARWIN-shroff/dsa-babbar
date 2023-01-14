#include<bits/stdc++.h>
using namespace std;
int kthelement(int arr[],int n,int k){
    sort(arr,arr+n);
    return arr[k-1];
}
int main(){
    int arr[] = {5,52,9,6,36,54};
    int n = sizeof(arr)/sizeof(arr[0]), k = 3;
    cout<<"element is: "<<kthelement(arr,n,k);
    return 0;
}

/*This is one method of solving kth small element question using sort function 
1.First create an int function(don't use void as void function doesn't return anything.
2.Use sort function inside the function as sort(start,end).
3.return arr[k-1] value.

There is also one method without using sort function which is heap method.
