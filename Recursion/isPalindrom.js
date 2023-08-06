function isPalindrom(str,s,e){
    if(str[s]!==str[e]) return false;
    if(s<e+1) return isPalindrom(str,s+1,e-1);
    return true;
}

let str = "palinoilap";
if(str.length===0 || str.length===1) console.log("Yes");
else{
    if(isPalindrom(str,0,str.length-1)) console.log("Yes");
    else console.log("No");
}