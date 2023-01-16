#include<bits/stdc++.h>
using namespace std;

int main(){
   int arr[]={1,-12,3,5,4};
   int max=arr[0];
   for(int i=1; i<5; i++){
    if(arr[i]>max){
        max=arr[i];
    }
   }
 cout<<max;
 cout<<endl;
    return 0;
}