Problem Code:
SMOL




#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,k;
	    cin>>n>>k;
	    if(k==0){
	    cout<<n<<endl;
	    }
	    else{
	        cout<<n%k<<endl;
	    }
	}
	return 0;
}
