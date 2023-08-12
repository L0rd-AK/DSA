#include <bits/stdc++.h>
using namespace std;
int Partision(int a[],int start, int end){
    int pivot=end,i=start-1;
    for(int j=start;j<end;j++){
        if(a[j]<a[pivot]) {i++;swap(a[j],a[i]);}
    }
    i++;
    swap(a[i],a[pivot]);
    return i;
}
void Quick_sort(int a[],int start,int end){
    if(end<=start) return;
    int pivot=Partision(a,start,end);
    Quick_sort(a,start,pivot-1);
    Quick_sort(a,pivot+1,end);
}
int main(){
    int a[]={72,73,83,92,47,56,10,24,356,67,8728,12};
    int size=sizeof(a)/sizeof(a[0]);
 
    Quick_sort(a,0,size-1);
    for(int i=0;i<size;i++) cout<<a[i]<<" ";
}