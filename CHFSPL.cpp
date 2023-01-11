Problem Code:
CHFSPL




#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,max;
	    cin>>a>>b>>c;
	    if((a+b>=b+c)&&(a+b>=a+c)){
	        max=a+b;
	    }
	    else if((b+c>=a+c)&&(b+c>=a+b)){
	        max=b+c;
	    }
	    else if((a+c>=a+b)&&(a+c>=b+c)){
	        max=a+c;
	    }
	    cout<<max<<endl;
	}
	return 0;
}