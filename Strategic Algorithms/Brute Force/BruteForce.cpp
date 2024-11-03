//Brute force is used to check all the possible inputs to get the optimal solution 

#include<iostream>
using namespace std;
int main()
{
    int i,j,a[5],val,index;

    //input array
    cout<<"Enter 5 values in array : \n";

    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the value to find : ";
    cin>>val;
    //logic
    for(i=0;i<5;i++)
    {
        if(a[i]==val)
        {
            index=i;
            break;
        }
    }

    //output index
    cout<<val<<" found at "<<index<<"\n";
    return 0;
}