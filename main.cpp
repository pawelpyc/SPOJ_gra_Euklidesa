#include <iostream>

using namespace std;

int Wygrana(int x, int y)
{
    while(x!=y)
        {
            if(x>y)
            {
                x=x-y;
            }
            if (y>x)
            {
                y=y-x;
            }
        }
    return x+y;
}

int main()
{
    int t;
    int tab[10];
    cin>>t;
    for (int i=0; i<t; i++)
    {
        int a,b;
        cin>>a>>b;
        tab[i]=Wygrana(a,b);
    }
    for (int i=0; i<t; i++)
    {
        cout<<tab[i]<<endl;
    }
    return 0;
}
