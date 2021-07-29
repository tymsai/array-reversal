#include<iostream>
using namespace std;
int main(){
    int x, a, b[x];
    cin>>x;
    for(int i=0; i<x; i++){
        cin>>b[i];
    }
    for(int j=x-1; j>=0; --j){
        cout<<b[j]<<endl;
    }
    return 0;
}
