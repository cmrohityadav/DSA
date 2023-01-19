#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>v{1,2,3,4,5};
    v.erase(v.begin());
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    v.erase(v.begin(),v.end()-2);
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}
