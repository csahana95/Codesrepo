#include <iostream>
using namespace std;

int main() {
	
	// your code here

    int t;

    cin>>t;

    while(t--)

    {

        int n;

        cin>>n;

        int temp,i;

        long long int s=0;

        for(i=0;i<n;i++)

        {
            cin>>temp;

            s=s+temp;

        }

        if(s%n==0)

            cout<<n<<endl;

        else

            cout<<n-1<<endl;



    }

    return 0;
}