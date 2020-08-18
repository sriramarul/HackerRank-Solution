class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int round=0;
        int arr[num_people];
        int n=num_people;
        for(int i=0;i<n;i++){
            arr[i]=0;
        }
        while(candies>0){
            for(int i=0;i<n;i++){
                if(candies>=((round*n)+i+1)){
                arr[i]=arr[i]+(round*n)+i+1;
                candies=candies-((round*n)+i+1);
                }else{
                    arr[i]=arr[i]+candies;
                    candies=0;
                    break;
                }
            }
            round++;
        }
        vector<int> a;
        for(int i=0;i<n;i++){
            a.push_back(arr[i]);
        }
        return a;
    }
};