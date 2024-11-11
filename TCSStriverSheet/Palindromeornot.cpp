int reverse(int n)
{
int reverse=0;
while(n>0)
{
    int a=n%10;
    reverse=reverse*10+a;
    n=n/10;
}
return reverse;
}
bool palindrome(int n)
{
    // Write your code here
    int a=reverse(n);
    return (a==n);
}