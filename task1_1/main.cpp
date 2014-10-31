#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    return 0;
}

void zad1()
{
    cout<<"Hello fmi"<<endl;

}
void zad2()
{
    int age = 59;

    cout<<"I'm Bill Gates and I'm "<<age<<" years old" <<endl;

}

void zad3()
{
    bool lovePrograming = true ,loveLudogorets = true,programShouldHaveNoComment = false;
   cout<<"lovePrograming "<<lovePrograming<<endl;
   cout<<"LoveLudogorets "<<loveLudogorets<<endl;
   cout<<"programShouldHaveNoComments "<<programShouldHaveNoComment<<endl;
}
void zad4()
{
    string[4] friends = {"Friend1","Friend2","Friend3","Friend4","Friend5"};
    //printing friends' names stored in friends array
    for(int i=0;i<4;i++)
    {
        cout<<friends[i].c_str()<<endl();
    }
}

void zad5(){
    string favSport;
    int favMonth;

    cout<<"Enter your favorite sport: ";
    cin>>favSport;
    cout<<endl<<"Enter your favorite month ";
    cin>>favMonth;

}

void zad6()
{
  int a;
  int b;

  cout<<"a: ";
  cin>>a;
  cout<<"b: ";
  cin>>b;
  cout<<"Perimeter "<<2(a+b);
}

void zad7()
{
    int itemCount;
    int itemPrice;

    cout<<"Price of the item ";
    cin>>itemPrice;

    cout<<"Number of items ";
    cin>>itemCount;

    cout<<"Taxes "<<itemPrice*itemCount*1/5<<endl();
}

void zad8()
{
    int Ax,Ay,Bx,By;

    cout<<"Ax ";
    cin>>Ax;
    cout<<endl<<"Ay ";
    cin>>Ay;
    cout<<endl<<"Bx ";
    cin>>Bx;
    cout<<endl<<"By ";
    cin>>By;

    cout<<endl<<"The distance is "<<sqrt(pow(((Bx-Ax),2) + pow((By-Ay),2)))<<endl;
}

void zad9()
{
    int myAge , currentYear,compareYear ;
    cout<<"Age: ";
    cin>>myAge;
    cout<<endl<<"Current age ";
    cin>>currentYear;

    if((compareYear - currentYear + myAge)>100)
    {
        cout<<endl<<"Sorry , you will be dead";
    }
    else cout<<"You may probably be alive";
}






