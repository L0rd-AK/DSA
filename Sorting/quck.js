let a=[4,2,7,1];
let size =a.length;

function Quick( a,  n, pivot, dir)
{

    if(dir){
        let flag=0;
        for(let i=0;i<n;i++){
            if(a[pivot]<a[i]){
                // swap(a[pivot], a[i]);
                let temp=a[pivot];
                a[pivot]=a[i];
                a[i]=temp;
                flag=1;
                pivot=i;
                dir=0;
            }
            if(dir==0)break;
        }
        if(flag==0) return a;
        else return Quick(a, n, pivot,dir);
    }else{
        let flag=0;
        for(let i=n-1;i>=0;i--){
            if(a[pivot]>a[i]){ 
                // swap(a[pivot], a[i]);
                let temp=a[i];
                a[i]=a[pivot];
                a[pivot]=temp;
                flag=1;
                pivot=i;
                dir=1;
            }
            if(dir==1)break;
        }
        if(flag==0) return a;
        else return Quick(a, n, pivot,dir);
    }
    
}

    
Quick(a, size,0,false);

