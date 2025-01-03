#include<iostream>
#include<string>
using namespace std;
/* 请在这里填写答案 */
class Fruit
{
    protected:
    int weight;
    public:
    Fruit(int a):weight(a)
    {
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
    Banana(string a,int b):Fruit(b)
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