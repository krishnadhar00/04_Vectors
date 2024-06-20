#include<iostream>
#include<vector>     // header file.
using namespace std;
int main()
{
    vector<int>v(1);  // declaring the vector of integer type and of size 4.
    cout<<v.size()<<endl;  // giving the size of vector.
    v.resize(2);            // it resize the size of vector.
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;    // it always equal to or greater than the size.
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);   // adding the element at the end.
    v.push_back(4);
    v.insert(v.begin()+3,8);  // inserting the element 8 at poition 3.
    cout<<v[3]<<endl;
    v.pop_back();           // it will delete the element from the last.
    v.erase(v.begin()+3);   // it will delete the 3rd element with respect from start.
    cout<<v[3]<<endl;
    cout<<v[0]<<endl; // as we declare the size as 1 and resize to 2 so if we access the value which is present at that index then it gives the 0 becoz it stores the value as 0. yes wth of v.insert() we can insert the value at that index.

}