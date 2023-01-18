/* Given an integer array and its size, reverse the array and print it . Here 1<size<101
.
For ex: arr[]={1,2,3,4,5} n=5
Output: 5,4,3,2,1
arr[]={1,1,1,1,1] n=5
Output: 1,1,1,1,1 */

#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);

int start=0;
int end=n-1;
while(start<end){
int temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;
start++;
end--;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
    return 0;
}