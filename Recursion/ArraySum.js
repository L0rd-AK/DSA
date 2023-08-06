function arraySum(a,n){
    if(n<=0) return 0;
    else return arraySum(a,n-1)+a[n-1];
}
const arr=[1,3,2,5,4];
console.log("Sum: ",arraySum(arr,arr.length));