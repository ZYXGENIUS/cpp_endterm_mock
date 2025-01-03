#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int N,M,X,Y;//X mean's x's home,Y mean's y's home
    cin>>N>>M>>X>>Y;
    vector<int> x;//x goes to N places
    vector<int> y;//y goes to M places
    int x_min=X,x_max=X,y_min=Y,y_max=Y;//the range x and y goes
    for(int i=0;i<N;i++)
    {
        int temp;
        cin>>temp;
        if(temp<x_min)
            x_min = temp;
        if(temp>x_max)
            x_max = temp;
        x.push_back(temp);
    }
    for(int i=0;i<M;i++)
    {
        int temp;
        cin>>temp;
        if(temp<y_min)
            y_min = temp;
        if(temp>y_max)
            y_max = temp;
        y.push_back(temp);
    }
    //data insert
    cout<<X<<" and "<<Y<<": ";
    bool possible = false;//mean's impossible
    vector<int> y_range;
    for(int i=y_min;i<=y_max;i++)
    {
        int temp = i;
        y_range.push_back(i);
    }
    for(int i=y_range[0];i<y_range[y_range.size()-1];i++)
    {
        if(i<=x_max && i>=x_min)//y's range is in x's range.
            possible = true;
    }
    if(possible)
    cout<<"possible";
    else
    cout<<"impossible";
    return 0;
}
