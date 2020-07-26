class Solution {
public:
    int countOdds(int low, int high) {
        int diff=high-low+1;
        int count=0;
       if(low%2==0){
           count=floor(diff/2.0);
       }else{
           count=ceil(diff/2.0);
       }
        return count;
    }
};