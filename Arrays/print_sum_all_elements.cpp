#include <bits/stdc++.h>
using namespace std;

int sum(int arr[],int n){
    int sum = 0; //initial sum = 0
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;
    cin>>size;
    int arr[size];
// in below line i starts from 0th position and go till size position
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< "sum of array elements " <<" "<< sum(arr,n);
    return 0;
}