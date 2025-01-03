#include<iostream>
#include<string>
using namespace std;
/* 请在这里填写答案 */
class Fruit
{
    protected:
    int weight;
    public:
    Fruit(int a)
    {
        weight = a;
        cout<<"Fruit Constructor";
    }
    ~Fruit(void)
    {

    }
}
/* 请在这里填写答案 */
int main(){
    Fruit *pf=new Banana("Chongqing",10);;
    pf->display();
    delete pf;
    return 0;
}