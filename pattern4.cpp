#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a-i;j++)
        {
            cout<<"  ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        if(i>1)
        {
            for(int j=2;j<=i;j++)
            {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
