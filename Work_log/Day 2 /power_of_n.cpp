# include <iostream>
using namespace std;
int power(int x, int n ){
	if(n==0){ //base case 
		return 1;
	}
	int output = power(x,n-1);
	return x*output;
}	
int main()
{	int n,x;
	cin>>x>>n;
	int final_output = power(x,n);
	cout<<final_output<<endl;
}