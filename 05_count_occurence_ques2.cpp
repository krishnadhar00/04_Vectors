// count the occurence of an element x in the vector.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(6);
    int x;
    cin>>x;
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    int idx = 0;
    for(int i=0;i<=v.size();i++)
    {
        if(v[i]==x)
        {
            idx++;
        }
    }
    cout<<idx<<endl;
}