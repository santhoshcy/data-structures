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

console.log(fact(4));

