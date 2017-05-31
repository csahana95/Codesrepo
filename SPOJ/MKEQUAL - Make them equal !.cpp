#include <iostream>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int N,i;
		scanf("%ld",&N);
        long int temp;
        long long int sum=0;
        for(i=0;i<N;i++)
        {
            scanf("%ld",&temp);
            sum+=temp;
        }

        if(sum%N==0)
			printf("%ld\n",N);

        else
			printf("%ld\n",N-1);
    }

    return 0;
}