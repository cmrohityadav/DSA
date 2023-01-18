#include<bits/stdc++.h>
using namespace std;
 int main(){
 
cout<<"enter the key value"<<endl;
int key;
int ans=-1;
cin>>key ;
int arr[5]={1,2,3,4,5};
for(int i=0;i<5;i++){
if(arr[i]==key){
    ans=i; 
    break;
}

}

cout<<ans<<endl;

    return 0;
 }