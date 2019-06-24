// Given an array of integers, return indices of the two numbers such that they add up to a specific target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> res;
        vector<int> :: iterator it;
        unordered_map<int, int> s;
        
        for(int i =0 ; i < nums.size(); i++)
        {
            int temp = target - nums[i];
            
            if( s.find(temp) != s.end())
            {
                
                res.push_back(s[temp]);
                res.push_back(i);
            }
            s[nums[i]] = i;
        }
        return res;
        
    }