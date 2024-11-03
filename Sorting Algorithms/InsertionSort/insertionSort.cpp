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

    for(i=1;i<5;i++)
    {
        int key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key; 

    }

    //Printing the output
    cout<<"Sorted array : \n";
    for (i=0;i<5;i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0;
}