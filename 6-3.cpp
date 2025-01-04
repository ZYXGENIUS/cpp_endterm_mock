#include<iostream>
#include<string>
using namespace std;
/* 请在这里填写答案 */
class Fruit
{
    protected:
    int weight;
    public:
    Fruit(int a = 9)//这里传入了默认参数值
    {
        weight=a;
        cout<<"Fruit Constructor"<<endl;
    }
    virtual ~Fruit(void)
    {
        cout<<"Fruit Destructor"<<endl;
    }
    virtual void display(void)
    {
        cout<<"weight="<<weight<<endl;
    }
};
class Banana:public Fruit
{
    private:
    string origin;
    public:
    Banana(string a,int b)//Bannana会先调用Fruit的构造函数（不传参数值，但是Fruit没有默认构造函数），所以在这里必须初始化。
    {
        origin = a;
        cout<<"Banana Constructor"<<endl;
    }
    ~Banana(void)
    {
        cout<<"Banana Destructor"<<endl;
    }
    void display(void)
    {
        cout<<"origin="<<origin<<",weight="<<weight<<endl;
    }
};
/* 请在这里填写答案 */
int main(){
    Fruit *pf=new Banana("Chongqing",10);;
    pf->display();
    delete pf;
    return 0;
}