// Find the last occurence of an element x in the vector.
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
    int idx = -1;
    for(int i=0;i<=v.size();i++)
    {
        if(v[i]==x)
        {
            idx=i;
        }
    }
    cout<<idx<<endl;
}

// Another approach is to solve this question is that start the loop from the last i.e v.size() and go to to the first index and search the element and whatever the position found by the element that is the last occurence and note the index i and break the loop.

// for(int i=v.size()-1;i>=0;i--)
// {
//     if(v[i]==x)
//     {
//         idx= i;
//         break;
//     }
// }