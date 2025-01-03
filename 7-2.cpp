#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    string a,b;
    int d;
    cin>>d;
    cin>>a>>b;
    bool check = true;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b[b.size()-1-i])
        {
            check = false;
        }
    }
    if(check)
    {
        cout<<a<<" and "<<b<<" are reverse.";
    }
    else
    {
        cout<<a<<" and "<<b<<" are not reverse.";
    }
    return 0;
}