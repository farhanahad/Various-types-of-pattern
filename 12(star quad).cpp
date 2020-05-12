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
            if(row==n || row==1 || col==n || col==1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
