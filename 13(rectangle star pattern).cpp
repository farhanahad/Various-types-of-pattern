#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"Enter size:";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(col==1 || row==n || col==row)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

