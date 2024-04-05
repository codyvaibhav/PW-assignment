#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std; 

int findDuplicate(vector<int>& nums) {
        int dup= nums[0];
        int n = nums.size();
        // int i=0,j=i+1;
        // while(i<n && j<n-1){
        //     if(nums[i]==nums[j])
        //     dup = nums[j];
        //     break;
        //     i++;j++;
        // }
        for(int i=0;i<=n-1;i++){
            if(nums[nums[i]]<0) dup = nums[nums[i]];
            break;
            nums[nums[i]] = -1* nums[nums[i]];
        }
        
    
        // for(int i=0;i<=n-1;i++){
        //    for(int j=i+1;j<=n-1;j++){
        //        if(nums[i]==nums[j])
        //         dup = nums[j];
        //         break;
        //    }

        //    }
        return dup;
    }


int main(){
  vector<int> v;
  v.push_back(3); 
  v.push_back(5); 
  v.push_back(-6); 
  v.push_back(4); 
  v.push_back(-1); 
  v.push_back(2); 

}