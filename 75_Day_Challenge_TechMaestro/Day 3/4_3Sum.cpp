class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& num) {
        
		//Intializing a vector res to store the required result 
        vector<vector<int>> res;
        
		//Sorting the vector so that we can efficiently apply the two pointer approach
        sort(num.begin(),num.end());
       
	   // For loop only running till `n-2`, if we have a case where we only have 3 elements then we dont have to iterate through the whole vector 
        for(int i=0; i<(int)(num.size()-2); i++)
        {
		    // This is an IMPORTANT condition: Here we only start checking for the target sum, if we havent gone through that element before or it is the very first element of the vector ( and of course the index has to be greater than 0 ) 
            if(i==0 || (i>0 && num[i]!=num[i-1]))
            {
			    // Intializing low, high and sum as per the Two Sum logic --> a + b + c = 0 then b + c = -a
                // Consider `b` as low, `c` as high and `a` as sum  
                int lo = i+1;
                int hi = num.size()-1;
                int sum = 0 - num[i];
                
				// If Low is less than High is the terminating condition, then we will move on the the next iteration of `i`
                while(lo < hi)
                {
				   // If we find that the sum of b + c = - a
                    if(num[lo] + num[hi] == sum)
                    {
					    // Then we declare a temp vector and push nums[i], nums[low], nums[high] into this vector, as we have found the target sum 
                        vector<int> temp;
                        temp.push_back(num[i]);
                        temp.push_back(num[lo]);
                        temp.push_back(num[hi]);
						
						// Then we push the temp into res as it will be one of the target sum  
                        res.push_back(temp);
                        
						// This is the condition for avoiding repeating numbers, if we found that number is repeating then we skip it 
                        while(lo < hi && num[lo] == num[lo+1])
                        {
                            lo++;
                        }
						
						// Same case here, just that it is done from RHS of the vector 
                        while(lo < hi && num[hi] == num[hi-1])
                        {
                            hi--;
                        }
                        
						// Once all the same numbers are checked we deliberately move the Low and High pointer so that the cross each other and we reach the termination condition 
                        lo++;
                        hi--;
                    }
                    
					// If the sum is greater than nums[lo] + nums[hi], then we have to move the low forward 
                   // Like: 0 + (-1) < 2 , then it is pretty obvious that low has to be increased inorder to match the RHS of the equation 
                    else if(num[lo] + num[hi] < sum)
                    {
                        lo++;
                    }
                    // Same logic has to be applied here as well 
                    else 
                    {
                        hi--;
                    }
                }
            }
            
        }
		// At the end of all the iteration of `i` we return the `res` vector which stores all the required vecotrs in `temp`
        return res;
    }
};
