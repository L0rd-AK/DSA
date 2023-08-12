#include <bits/stdc++.h>
using namespace std;
void marge(int a[],int left[], int right[],int size){
    int mid=size/2;
    int leftArraySize=mid;
    int rightArraySize=size-mid;
    int i=0,l=0,r=0;
    // comparing left and right Array, which one has smallest value and putting it in main Array a[]
    while(l<leftArraySize && r<rightArraySize){
        if(left[l]<right[r]) {a[i]=left[l],i++,l++;}
        else {a[i]=right[r],i++,r++;}
    }
    // if there any element left in leftArray
    while(l<leftArraySize){a[i]=left[l],i++,l++;}
    // if there any element left in rightArray
    while(r<rightArraySize){a[i]=right[r],i++,r++;}
}
void Marge_sort(int a[],int size){
    if(size<=1) return;
    int mid=size/2;
    int left[mid],right[size-mid];
    int i=0,j=0;
    for(;i<size;i++){
        if(i<mid) left[i]=a[i];
        else {right[j]=a[i];j++;}
    }
    Marge_sort(left,mid);
    Marge_sort(right,size-mid);
    marge(a,left,right,size);
}

int main(){
    int a[]={72,73,83,92,47,56,10,24,356,67,8728,12};
    int size=sizeof(a)/sizeof(a[0]);

    Marge_sort(a,size);
    for(int i=0;i<size;i++) cout<<a[i]<<" ";
}