/*Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.

Cracking the Coding Interview in C++ - Foundation

For ex: arr[]={1,2,3,4,5} n=5
Output: Odd Numbers = 3
Even Numbers = 2 */
#include<bits/stdc++.h>
using namespace std;
 int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int odd=0;
    int even=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
        
    }
cout<<"Number of odd number is "<<odd<<endl;
cout<<"Number of even number is "<<even<<endl;

    return 0;
 }