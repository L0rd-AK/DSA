function MAX(a,n){
    if(n===1) return a[0];
    else return Math.max(a[n-1],MAX(a,n-1));
}
let a=[1,3,18,9,6,7];

console.log(MAX(a,a.length));