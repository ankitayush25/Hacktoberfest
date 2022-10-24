//Problem name - Population
/*If there were initially XX million people in a town, out of which YY million people left the town and ZZ million people immigrated to this town.

Determine the final population of town in millions.

Input Format

-The first line of input will contain a single integer TT, denoting the number of test cases.
-The first and only line of each test case consists of three integers XX, YY and ZZ.
Output Format

-For each test case, output the final population of the town in millions.*/


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z,final;
	    cin>>x>>y>>z;
	    final= (x+z)-y;
	    cout<<final<<endl;
	}
	return 0;
}
