#include <stdio.h>
int buble_sort(int[]);
int main(){
    int a[9]={7,5,3,9,8,2,4,1,6};
    buble_sort(a);
    
}
int buble_sort(int a[]){
    int temp=0;
    for(int i=0;i<9;i++){
        for(int k=0;k<8;k++){
            if(a[k]>a[k+1]){
                temp=a[k+1];
                a[k+1]=a[k];
                a[k]=temp;
            }
        }
    }
    for(int l=0;l<9;l++){
        
        printf("%d\n",a[l]);
    }
    
    
}
