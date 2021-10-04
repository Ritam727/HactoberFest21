#include <iostream>
using namespace std;

int sumof_first_square(int n)
{
	if(n==1)
		return n;
	return sumof_first_square(n-1) + n*n;
}

int main()
{
	int n;
	cin>>n;

	cout<<"Sum of first "<<n<<" square numbers: "<<sumof_first_square(n);
	return 0;
}