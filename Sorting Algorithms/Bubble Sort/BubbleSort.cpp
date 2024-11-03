#include<iostream>
using namespace std;
int main()
{
    int a[5],i,j,temp;
    //take input for the array
    cout<<"Enter the 5 elemets in the array : \n";
    for (i=0;i<5;i++)
    {
        cin>>a[i];
    }

    //logic

    for(i=0;i<5;i++)
    {
        for(j=0;j<5-1;j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        } 
    }

    //Printing the output
    cout<<"Sorted array : \n";
    for (i=0;i<5;i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0;
}