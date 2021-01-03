#include <bits/stdc++.h> 
using namespace std;

int seq(long long int a,long long int memo[]){
    long long int sum=0;
    if(memo[a]!='\0'){
        return(memo[a]);
    }
    
    if(a>2){
        sum+=(a+seq(floor(a/2),memo));
    }
    
    memo[a]=sum;
    return sum;
    
}



int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >>t;
    long long int memo[100001]={0,1,3};
    for(long long int i=0;i<t;i++){
        long long int h,p,q=0;
        cin >>h;
        cin >>p;
        q=seq(p,memo);
        if(h>q){
            cout << 0 << endl;
        }
        if(h<=q){
            cout << 1 << endl;
        }
        
    }
   
 
  
  
  return 0;
}
