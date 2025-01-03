#include<iostream>
using namespace std;
class Vec2
{
    private:
        double u;
        double v;
    public:
        Vec2(double u=0,double v=0);
        double getU() const;
        double getV() const;
        Vec2 operator+(const Vec2&b);
        friend Vec2 operator-(const Vec2&a,const Vec2&b);
        bool operator==(const Vec2&b) const;
        friend bool operator!=(const Vec2&a,const Vec2&b);
        friend ostream&operator<<(ostream&os,const Vec2&c);
        friend istream&operator>>(istream&is,Vec2&c);
};
double Vec2::getU() const
{
    return u;
}
double Vec2::getV() const
{
    return v;
}
Vec2 operator-(const Vec2&a,const Vec2&b){
    return Vec2(a.u-b.u,a.v-b.v);
}
bool Vec2::operator==(const Vec2&b) const{
    return u==b.u&&v==b.v;
}
/* 请在这里填写答案 */
Vec2::Vec2(double u,double v)
{
    //代码
    this->u = u;
    this->v = v;
}

Vec2 Vec2::operator+(const Vec2&b)
{
    //代码
    return Vec2(this->u+b.u,this->v+b.v);
}

bool operator!=(const Vec2&a,const Vec2&b)
{
    //代码
    bool check = true;
    if(a.u==b.u)
    {
        if(a.v==b.v)
            check = false;
    }
    return check;
}

ostream&operator<<(ostream&os,const Vec2&c)//match cout
{
   //代码
   os<<"u="<<c.u<<","<<"v="<<c.v;
   return os;
}

istream&operator>>(istream&is,Vec2&c)//match cin
{
   //代码
    is>>c.u>>c.v;
   return is;
}

/* 请在这里填写答案 */
int main()
{
    Vec2 a;
    cin>>a;
    cout<<"a: "<<a<<endl;
    Vec2 b(3,4);
    Vec2 c=a+b;
    cout<<"c: "<<c<<endl;
    Vec2 d=a-b;
    cout<<"d: "<<d<<endl;
    cout<<"a==a: "<<(a==a)<<endl;
    cout<<"a!=a: "<<(a!=a)<<endl;
    return 0;
}