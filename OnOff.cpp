
//Problem - N Buttons 1 Bulb
//link -https://www.codechef.com/START49D/problems/ON_OFF

//Kulyash stays in room that has a single bulb and NN buttons. The bulb is initially on.

//The initial states of the buttons are stored in a binary string SS of length NN — if $ is 00, the ii-th button is off, and if $ is 11, the ii-th button is on. If Kulyash toggles any single button then the state of the bulb reverses i.e. the bulb lights up if it was off and vice versa.

//Kulyash has toggled some buttons and the final states of the buttons are stored in another binary string RR of length NN. He asks you to determine the final state of the bulb.


//code-

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    
	    long long int n;
	    cin>>n;
	    string a,b;
	    cin>>a>>b;
	    long long int c1=0,c2=0;
	    
	    for(int i=0;i<n;i++){
	        if(a[i]=='1')
	        c1++;
	    }
	    for(int i=0;i<n;i++){
	        
	        if(b[i]=='1')
	        c2++;
	    }
	    long long int di=abs(c1-c2);
	    if(di%2==0)
	    cout<<"1"<<endl;
	    else
	    cout<<"0"<<endl;
	        
	    }
	    
	return 0;
}
