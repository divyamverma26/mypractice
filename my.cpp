#include<iostream>
#include<valarray>
#include<cmath>
using namespace std;
int main(){
    int n=7;
    for(int i=0;i<n/2+1;i++){
        for(int j=0;j<(n/2)-i;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*i)+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n/2;i++){
        for(int j=0;j<(2*i)-i+1;j++){
            cout<<" ";
        }
        for(int j=0;j<n-(2*i)-2;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}