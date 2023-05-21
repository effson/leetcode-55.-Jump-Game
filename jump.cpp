//In this question, you only need to care about the element 0.
//if nums[i]==0, and for k in range(0,i], nums[i-k]<=k,that means you cannot reach the end. 
class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.empty()||(nums.size()>1&&nums[0]==0))
            return false;
        int size=nums.size();
        if(size==1)
            return true;

        int index=0;
        while(index<size)
        {
            while(index<size&&nums[index]!=0)
            {
                index+=1;
            }
            if(index==size-1||index==size)
                break;
            int k=1;
            while(k<=index)
            {
                if(k<=index&&nums[index-k]>k)
                    break;
                else
                    k+=1;
            }
            if(k==index+1)
                return false;
            index+=1;
        }
        return true;  
    }
};
