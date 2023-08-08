function binarySearch(a,l,r,key){

        var m=l+(r-l)/2;
        m=Math.floor(m);
        if(a[m]===key) return m;
        if(l>=r) return -1;
        if(a[m]<key){
            l=m+1;
            return binarySearch(a,l,r,key);
        }
        if(a[m]>key){
            r=m-1;
            return binarySearch(a,l,r,key);
        }



}
const a=[1,2,3,4,5,6,7,8,9];
console.log("Key founf at index",binarySearch(a,0,a.length-1,3));