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
