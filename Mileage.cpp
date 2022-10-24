//Problem name - Mileage
//problem link- https://www.codechef.com/START50D/problems/MILEAGE

#include <iostream>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin>>t;
  while(t--){
      int a,b,c;
      string ans="NO";
      cin>>a>>b>>c;
      int d=min(min(a,b),min(b,c));
      if(a==b && a==d){
          ans="YES";
      }
      else if(a==c && a==d){
          ans = "YES";
      }
      else if(b==c && b==d){
          ans="YES";
      }
      cout<<ans<<endl;
  }
  
  return 0;
}
  
