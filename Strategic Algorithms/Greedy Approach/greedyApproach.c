#include <stdio.h>

// Function to print the number of coins and value
void printx(int num, int value) {
    printf("You need %d coins of value %d\n", num, value);
}

int main() {
    int a[5], i,j, val,temp;
    int sum=0,count=0;
    // Input
    printf("Enter values of 5 coins: \n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);  // Use &a[i] to provide the address of each element
    }
    printf("Enter the value you want to get : ");
    scanf("%d",&val);
    //sorting
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[j+1]>a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    //logic
    for (i = 0; i < 5; i++) {
        while (val >= a[i]) {  // Use the largest possible coin as many times as possible
            val -= a[i];
            count++;
            printx(1, a[i]);  // Print each coin used
        }
        if (val == 0) break;  // If the value is made, exit the loop
    }

    return 0;
}
