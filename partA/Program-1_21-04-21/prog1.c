#include<stdio.h>
void main(){
    int a[20],b[20];
    int n,count,j;
    j=0;
    count=1;
    printf("Enter the numner of bits: ");
    scanf("%d",&n);
    printf("Enter the Bits:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]==1){
            b[j]=a[i];
            for(int k=i+1;count<5 && a[k]==1 && k<n;k++){
                j++;
                b[j]=a[k];
                count++;
                if(count==5){
                    j++;
                    b[j]=0;
                }
                i=k;
            }
        }
        else{
            b[j]=a[i];
        }
        j++;
    }
    printf("After Bit Stuffing :");
    for(int i=0; i<j; i++)
        printf("%d",b[i]);
    printf("\n");
}
