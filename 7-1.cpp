#include<iostream>

using namespace std;

bool judge(int a,int b)
{
    bool check = false;//not a right number
    if(a%b == 0)
        check = true;
    return check;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int c=0;
    if(judge(a,b))
    {
        c=a+b;
    }
    else
    {
        c=a-b;
    }
    cout<<c;
    return 0;
}