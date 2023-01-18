/*Given an integer array and its size, find the sum of the greatest and the smallest integer present
in the array. Here 1< size <101
For ex: arr[]={1,2,3,4,5} n=5
Output: 6
Explanation: The smallest  number in the array is 1 and the greatest numbers in the array is 5, so the sum
will be 1+5=6*/
#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[]={-10,2,3,4,5};
    int maxavalue=INT_MIN;
    int minValue=INT_MAX;
    for(int i=0;i<5;i++){
        maxavalue=max(maxavalue,arr[i]);
        minValue=min(minValue,arr[i]);
    }

    int answer=(maxavalue)+(minValue);
    cout<<answer<<endl;
    return 0;
}