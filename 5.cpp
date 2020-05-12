#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"Enter size:";
    cin>>n;
    for(row=n;row>=1;row--)
    {
        for(col=n-1;col>=row;col--)
        {
            cout<<" ";
        }
        for(col=1;col<=2*row-1;col++)
        {
            cout<<"*";
        }
    cout<<endl;
    }
}

