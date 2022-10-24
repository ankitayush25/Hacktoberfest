/*Problem name- Burgers32
link-https://www.codechef.com/problems/BURGERS2

Chef is very hungry. So, Chef goes to a shop selling burgers. The shop has 22 types of burgers:

    Normal burgers, which cost XX rupees each
    Premium burgers, which cost YY rupees each (where Y>XY>X)

Chef has RR rupees. Chef wants to buy exactly NN burgers. He also wants to maximize the number of premium burgers he buys. Determine the number of burgers of both types Chef must buy.

Output −1−1 if it is not possible for Chef to buy NN burgers.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i =1;i<=t;i++){
		int x,y,n,r;
		cin>>x>>y>>n>>r;
		int nx = x*n;
		int ny = y*n;
		if(r<nx){
			cout<<-1<<"\n";

		}
		else if(r>=ny){
			cout<<"0"<<" "<<n<<"\n";
		}
		
		else{
			int num = (r-n*x)/(y-x);
			cout<<n-num<<" "<<num<<"\n";
		}
	}
}
