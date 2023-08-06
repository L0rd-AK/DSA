function fact(n){
    if(n===0) return 1;
    else return fact(n-1)*n;
}

let num = 5;
console.log("Factorial of " + num + " is " + fact(num));