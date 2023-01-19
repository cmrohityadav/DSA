#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v{10,20,300,5};
    v.pop_back(); //last element remove krt hai
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<v.front()<<" "<<endl; // first element show krta hai
    cout<<v.back()<<endl; // last element show krta hai


    return 0;
}
