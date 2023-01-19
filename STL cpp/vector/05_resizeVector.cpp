#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1{1,2,3,4,5};
    v1.resize(3);
    for(int x:v1){
        cout<<x<<" ";
    }
    cout<<endl;


    v1.resize(5);
    for(int x:v1){
        cout<<x<<" ";
    }
    cout<<endl;

    v1.resize(10,456);
    for(int x:v1){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
