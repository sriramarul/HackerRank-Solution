    #include <iostream>
    using namespace std;
     
    int main(){
        int t;
        cin>>t;
        for(int T=0;T<t;T++){
            int n,m,k;
            cin>>n>>m>>k;
            if(m==0){
                cout<<0<<"\n";
                continue;
            }
            int each=n/k,p1j;
            if(m<each)
            {p1j=m;
                cout<<p1j<<"\n";
                continue;
            }
            else{
                p1j=each;
                m=m-each;
                int arr[k-1];
                for(int i=0;i<k-1;i++){
                    arr[i]=0;
                }
                int flag=0;
                while(true){
                    for(int i=0;i<k-1;i++){
                        if(m>0){
                        arr[i]=arr[i]+1;
                        m--;
                        }else{
                            flag=1;
                            break;
                        }
                    }
                    if(flag==1){
                        break;
                    }
                    
                }
                int max=0;
                for(int i=0;i<k-1;i++){
                    if(arr[i]>max){
                        max=arr[i];
                    }
                }
                int result=p1j-max;
                cout<<result<<"\n";
                continue;
            }
            
        }
        return 0;
    }
