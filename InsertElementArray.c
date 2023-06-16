//program to insert an element in an array
#include<stdio.h>
int main(){
    int a[100],n,i,key,pos;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("Enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter Position"); //where you want to insert element
    scanf("%d",&pos);
    printf("Enter value"); //who you want to insert element
    scanf("%d",&key);
    for(i=n-1;i>=pos-1;i--){
    a[i+1]=a[i];
    }
    a[pos-1]=key;
    printf("resulting array is:");
    for(i=0;i<=n;i++){
        printf("%d \t",a[i]);
    }
    return 0;
}