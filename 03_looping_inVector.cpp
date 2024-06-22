#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;

    // One way to take element if vector's size is not defined. so we have to use new element.
    for(int i=0;i<5;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }

    // Second way to take input from the user if size is defined.
    // vector<int>v1(5);
    // for(int i=0;i<v1.size();i++)
    // {
    //     cin>>v1[i];
    // }

    // For loop
    for(int i=0;i<5;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // Inserting the element after the second element.
    v.insert(v.begin()+2,6);

    // For each loop
    for(int ele:v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    // deleting the element from the second last.
    v.erase(v.end()-2);

    // while loop
    int idx=0;
    while(idx<v.size())
    {
        cout<<v[idx++]<<" ";
    }
}