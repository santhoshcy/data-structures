// while loop


var sum = 0;
var num = 1;
while(num<10)
{
    sum+=num;
    num++;
}
console.log(sum);


//for loop

var sum = 0;
for(var num = 1; num < 10; num++)
{
    sum+=num;

}
console.log(sum);

//using array

var arr = [1,2,3,4,5,6,7,8,9];
var sum = 0;
for(var i = 0; i< arr.length;i++)
{
sum+=arr[i];
}
console.log(sum);
