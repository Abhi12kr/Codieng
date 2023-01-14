/*Problem
Chef has two arrays AA and BB of the same size NN.

In one operation, Chef can:

Choose two integers ii and jj (1 \leq i, j \leq N)(1≤i,j≤N) and swap the elements A_iA 
i
​
  and B_jB 
j
​
 .
Chef came up with a task to find the minimum possible value of (A_{max} - A_{min}A 
max
​
 −A 
min
​
 ) after performing the swap operation any (possibly zero) number of times.

Since Chef is busy, can you help him solve this task?

Note that A_{max}A 
max
​
  and A_{min}A 
min
​
  denote the maximum and minimum elements of the array AA respectively.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains one integer NN — the number of elements in each array.
The second line consists of NN space-separated integers A_1, A_2,\ldots ,A_NA 
1
​
 ,A 
2
​
 ,…,A 
N
​
  denoting the elements of the array AA.
The third line consists of NN space-separated integers B_1, B_2, \ldots ,B_NB 
1
​
 ,B 
2
​
 ,…,B 
N
​
  denoting the elements of the array BB.


output:-*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    std::vector<long long int>arr;
	    for(int i=0;i<2*n;i++){
	    int a;
	    cin>>a;
	    arr.push_back(a);
	}
	sort(arr.begin(),arr.end());
	long long int x=1e9;
	for(int i=0;i<=n;i++){
	    x=min(x,arr[n+i-1]-arr[i]);
	}
	cout<<x<<endl;
	}
	return 0;
}