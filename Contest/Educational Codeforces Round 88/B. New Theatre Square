#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int l=0;l<t;l++){
	    int n,m,x,y;
	    cin>>n>>m>>x>>y;
	    char a[n][m];
	    int cost2=0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            cin>>a[i][j];
	            if(a[i][j]!='*'){
	                cost2=cost2+x;
	            }
	        }
	    }
	    int cost=0,cost3=0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(j+1<m && a[i][j]!='*' && a[i][j+1]!='*'){
	                cost3=cost3+y;
	                if(y<(x*2)){
	                    cost = cost+y;
	                    
	                    j++;
	                }else{
	                    cost=cost+x;
	                }
	                
	            }else{
	                cost3=cost3+x;
	                if(a[i][j]!='*')
	               { cost=cost+x;}
	            }
	        }
	    }
	    int result=min(cost3,min(cost2,cost));
	    cout<<result<<"\n";
	}
}
