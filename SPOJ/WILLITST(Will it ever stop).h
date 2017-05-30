#include <iostream>
using namespace std;

int main() {
	long long n;
	// your code here
	scanf("%lld",&n);
	if(!(n&n-1))
		printf("TAK");
	else
		printf("NIE");

	return 0;
}