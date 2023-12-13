#include <iostream>
using namespace std;

void f(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"arr["<<i<<"]: ";
        cin>>arr[i];
    }
    cout<<"Original array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    f(0,arr,n);
    cout<<"\nReversed array: ";
    for(int j=0;j<n;j++){
        cout<<arr[j];
    }
    return 0;
}
