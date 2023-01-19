#include<bits/stdc++.h>

using namespace std;

int main(){
    pair<int ,int>p={1,2};
    cout<<p.second<<endl;
    cout<<p.first<<endl;

    //nested pair
    cout<<"using nested pair";
    pair<int,pair<int,int>>r={1,{3,2}};
    cout<<r.second.first<<endl;


    //using array
    cout<<"using array"<<endl;
    pair<int,int>arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[2].second;



    cout<<endl;
    return 0;
}