//normal

function fact(num)
{
    var prod = 1;
    for(var i = num;i>=1;i--)
    {
        prod=prod*i;
    }
    return prod;

}

console.log(fact(5));


//Recursive

function fact(num)
{
if(num==1)
    return num;
else
    return num*fact(num-1);
}

console.log(fact(5));
