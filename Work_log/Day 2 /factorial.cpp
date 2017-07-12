# include <iostream>
using namespace std;


int factorial(int n){
	if(n==0){  // If we do not include a stoping point in a function the function will go
	return 1;   // till infinty and eventually run out of memory eventually giving a segment error.
	}
	int smalloutput = factorial(n-1);
	return n * smalloutput; 
}


int main(){
	int n;
	cin>>n;
	int output = factorial(n);
	cout<<output<<endl;
}