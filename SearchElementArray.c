//program to search an element in an array
#include<stdio.h>
int main(){
    int a[500],n,i,key,flag=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter elements in array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the key:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Element found is %d at a[%d]",key,i);
    }
    else{
        printf("Not found");
    }
    return 0;
}