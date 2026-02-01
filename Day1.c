// Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space for the new element.

#include <stdio.h>

int main() {
    int n,p,e;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter the element %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the position to insert:");
    scanf("%d",&p);
    printf("Enter the element to insert:");
    scanf("%d",&e);
    if(p<1||p>n){
        printf("Invalid Position");
    }
    n=n+1;
    for(int i=n-1;i>=p;i--){
        a[i]=a[i-1];
    }
    a[p-1]=e;
    printf("After inserting the element:");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
