bool isPrime(int n)
{
	// Write your code here.
	int count =0;
	if(n<=1){
		return false;
	}
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if (count==0) return true;
	return false;
}
