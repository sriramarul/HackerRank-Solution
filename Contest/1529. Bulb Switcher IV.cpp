class Solution {
public:
    int minFlips(string target) {
        int size=target.length();
        int target1[size];
        for(int i=0;i<size;i++){
            if(target[i]=='1'){
                target1[i]=1;
            }else{
                target1[i]=0;
            }
        }
        int count=0;
        int flag=0;
        for(int i=0;i<size;i++){
            if(target1[i]!=flag){
                count++;
                if(flag==1){
                    flag=0;
                }else{
                    flag=1;
                }
            }
        }
        return count;
    }
};