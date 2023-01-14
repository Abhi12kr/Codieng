Alice, Bob, and, Chef are standing on the coordinate plane. Chef is standing at the origin (coordinates (0, 0)(0,0)) while the location of Alice and Bob are (X_1, Y_1)(X 
1
​
 ,Y 
1
​
 ) and (X_2, Y_2)(X 
2
​
 ,Y 
2
​
 ) respectively.

Amongst Alice and Bob, find out who is at a farther distance from Chef or determine if both are at the same distance from Chef.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first and only line of each test case contains four space-separated integers X_1, Y_1, X_2,X 
1
​
 ,Y 
1
​
 ,X 
2
​
 , and Y_2Y 
2
​
  — the coordinates of Alex and Bob.
Output Format
For each test case, output on a new line:

ALEX, if Alex is at a farther distance from Chef.
BOB, if Bob is at a farther distance from Chef.
EQUAL, if both are standing at the same distance from Chef.
You may print each character in uppercase or lowercase. For example, Bob, BOB, bob, and bOB, are all considered identical.





solution:-

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    
	    
	   int alex= pow(abs(x1),2)+pow(abs(y1),2);
	   int bob= pow(abs(x2),2)+pow(abs(y2),2);
	    
	     double dist1=sqrt(alex);
	     double dist2=sqrt(bob);
	     
	     
	    if(dist1==dist2){
	        cout<<"EQUAL"<<endl;
	    }
	    else if(dist1>dist2){
	        cout<<"ALEX"<<endl;
	    }
	    else {
	        cout<<"BOB"<<endl;
	    }
	}
	return 0;
}