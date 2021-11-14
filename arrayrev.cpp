#include<iostream>
#define n 10
using namespace std;
int main(){
    int arr[n]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, temp=0;
    for(int i=0; i<n/2; i++){
        temp=arr[i];
        arr[i]=arr[n-i];
        arr[n-i]=temp;
    }
    for(int i=0; i<n; i++){
        cout<<endl<<arr[i];
    }
}
