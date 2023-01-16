#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,1,1,4,1,6};

    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0; i<size;i++){
        sum=sum+arr[i];
    }
cout<<"sum of the all element is: "<<sum;


 cout<<endl;

    return 0;
}
