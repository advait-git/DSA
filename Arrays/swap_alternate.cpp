#include <bits/stdc++.h>
using namespace std;
void printele(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}
void swapele(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
            // or if swap function do not work we can do
            // int temp = arr[1];
            // arr[1]=arr[0];
            // arr[0]=temp;
        }
    }
}
int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[5]={1,2,3,4,5};

swapele(even,6);
printele(even,6);

    }