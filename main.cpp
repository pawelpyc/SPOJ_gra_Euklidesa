#include <iostream>

using namespace std;

int main()
{
    int t;
    int tab[10];
    cin>>t;
    for (int i=0; i<t; i++)
    {
        long int a,b;
        cin>>a>>b;
        while (a!=b)
        {
            if (a>b) a=a-b;
            else b=b-a;
        }
        tab[i]=b+a;
    }
    for (int i=0; i<t; i++)
    {
        cout<<tab[i]<<endl;
    }
    return 0;
}
