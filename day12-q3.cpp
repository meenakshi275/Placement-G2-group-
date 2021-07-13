class Solution {
public:
    int singleNumber(vector<int>& nums) {
     int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
        }
        return ans;
    }
};


//using sorting

int singleNumber(vector<int>& nums) {
	sort(nums.begin(),nums.end());
	int n=nums.size();
	for(int i=0;i<nums.size()-1;i++){
		if(nums[i]!=nums[i+1]){
			return nums[i];
		}
		i++;
	}
	return nums[n-1];
}
