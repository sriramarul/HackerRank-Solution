class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> k;
        int j=arr.size(),flag=0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return k;
        }
        flag=0;
        while(true){
            
            int min=arr[0],mini=0;
            for(int i=0;i<j;i++){
                if(arr[i]<min){
                    min=arr[i];
                    mini=i;
                }
            }
            if(mini==0 && j==1){
                k.push_back(arr.size());
                break;
            }
            reverse(arr.begin(),arr.begin()+mini+1);
            reverse(arr.begin(),arr.begin()+j);
            k.push_back(mini+1);
            k.push_back(j);
            j--;
            
        }
        return k;
    }
};