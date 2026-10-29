 #include<iostream>
 #include<vector>
 int main(){
 
 int N = nums.size();
        
        for(int i = 0; i < N; i++){
            for(int j = i+1; j < i+N; j++){
                if(nums[j%N] > nums[i]){
                    ans[i] = nums[j%N];
                    break;
                }
            }
        }

 }