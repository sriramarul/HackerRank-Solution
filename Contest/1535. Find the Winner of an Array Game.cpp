class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        queue<int> q;
        int winner;
        int count=0;
        int front=arr[0];
        for(int i=1;i<arr.size();i++){
            q.push(arr[i]);
        }
        if(k>=arr.size()){
            sort(arr.begin(),arr.end());
            return arr[arr.size()-1];
        }
        while(true){
            if(front>q.front()){
                count++;
                int small=q.front();
                q.pop();
                q.push(small);
            }else{
                count=1;
                int small=front;
                front=q.front();
                q.pop();
                q.push(small);
            }
           
            if(count==k){
                winner=front;
                break;
            }
        }
        return winner;
    }
};