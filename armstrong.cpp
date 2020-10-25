#include <iostream>
using namespace std;

int main()
{
    int c;
    cout<<"enter a number"<<endl;
    cin>>c;
    int a;
    a=c;
    int b=0;
    while(a>0)
    {
        int last=a%10;
        b+=last*last*last;
        a=a/10;
    }
    if(b==c)
    {
        cout<<"the number is armstrong";
    }
    else
    {
        cout<<"the number is not armstrong";
    }
    return 0;
}
