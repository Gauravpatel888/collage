#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {  
        //print space (1st triangle)
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }


        //print 2nd tringle
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j=j+1;

        }

        //print 3rd tringle
        int t=i-1;
        while(t)
        {
        cout<<t;
        t=t-1;
        }
        cout<<"\n";
         i=i+1;

    }
    
     
}