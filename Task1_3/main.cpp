#include <iostream>
#include<string>
using namespace std;
void task1()
{
    int n=0;
    string a[40];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin::getline(cin,a[i]);
    }

}
void task2()
{
    int friendsCount,friendsAges[30];
    cin>>friendsCount;
    for(int i=0;i<friendsCount;i++)
    {
        cin>>friendsAges[i];
    }
    int max = friendsAges[0],min = friendsAges[0];
    for(int i=1;i<friendsCount;i++)
    {
        if(max<friendsAges[i])max=friendsAges[i];
        if(min>friendsAges[i])min=friendsAges[i];
    }
    cout<<"The oldest is "<<max<<"; the youngest is "<<min;
}
void task3()
{
    int a[10],n=0;
    bool isSorted= true,isDecreasing = false;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(a[0]>a[n-1])isDecreasing = true
        else isDecreasing = false;

    for(int i=1;i<n;i++)
    {
        if(a[i-1]>a[i]&& !isDecreasing )
        {
            isSorted = false;
            break;
        }
        if(a[i-1]<a[i] && isDecreasing)
        {
        isSorted = false;
        break;
        }
    }
    cout<<"The array is sorted: "<<isSorted;
}

void task4()
{
    int a[10],n=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n-1;i++)
    {
        int index;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                index = j;
            }
            int q = a[i];
            a[i] = a[index];
            a[index] = q;
        }

    }
}
void task5()
{
    string a,b;
    cin::getline(cin,a);
    for(int i=0;i<a.size();i++)
    {
        b[n] = a.c_str()[i];
    }
    a=b;
}
int main()
{

}


