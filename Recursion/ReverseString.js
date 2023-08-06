
var s="";
function reverse(str,k)
{

    if (k == str.length) return s;
    reverse(str, k + 1);
    s +=str[k];

}
let str="Amit";
reverse(str,0);
console.log(s);
