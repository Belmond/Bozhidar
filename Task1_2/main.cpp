#include <iostream>
#include <stack>
#include <list>

using namespace std;

void one()
{
    string a;
    cin>>a;

    if(a[a.length()-1]>='a'&& a[a.length()-1]<='z')
    cout<<"lower case character";
    if(a[a.length()-1]>='0'&&a[a.length()-1]<='9')
    cout<<"number ";
    if(a[a.length()-1]>='A'&&a[a.length()-1]<='Z')
    cout<<"Upper case character ";
}

bool two()
{
    int a;
    cin>>a;
    if(a==1 || a==2)return false;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)return false;
    }
    return true;
}

void three()
{

    int a = 0;
    stack<int> b;
    cin>>a;
    while(a!=0)
    {
        b.push(a%10);
        a/=10;
    }
    for(int i=0;i<=(int)b.size()+1;i++)
    {
        cout<<b.top()<<endl;
        b.pop();
    }
}

void four()
{
 //Look function "three"
}

bool five()
{
    int a;
    list<int> b;
    cin>>a;
    while(a!=0)
    {
        b.push_back(a%10);
        a/=10;
    }
    while(b.size()!=0)
    {
        if(b.front()!=b.back())return false;
        b.pop_back();
        b.pop_front();

    }
    return true;
}

void six()
{
    int a;
    cin>>a;
}

void seven()
{
    const n = 10;
    int a[n][1],b=0;
    cin>>b;
    for(int i=0;i<b;i++)
    {

    }
}

int main()
{
    //one();
    //cout<<two();
   // three();
   cout<<five();
    return 0;
}
