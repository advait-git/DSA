
#include <bits/stdc++.h>
using namespace std;

int getMax(int arr[],int n){
   int max = INT_MIN;
   for(int i=0;i<n;i++){
    // maxi = max(maxi,arr[i]);
    if(arr[i]>max){
        max=arr[i];
    }
   }
return max;
}
int getMin(int arr[],int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        // mini = min(mini,arr[i]);
        if(arr[i]<min){
            min=arr[i];
        }
    }
     return min;
}

int main() {
    int size;
    cin>>size;
    int arr[size];

    // taking input in my array
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
   cout<< getMax(arr,size) << endl;
   cout<< getMin(arr,size) << endl;
    return 0;
}