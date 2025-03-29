#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// Print Subarray 
// int main(){
//   int n = 5;
//   int arr[5] = {1, 2, 3, 4, 5};

//   for(int start=0; start<n; start++){
//     for(int end=start; end<n; end++){
//       for(int i=start; i<=end; i++){
//         cout << arr[i];
//       }
//       cout << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }


// Maximum Subarray Sum
//Brute Force Approach
// int main(){
//   int n=5;
//   int arr[5] = {1, 2, 3, 4, 5};
//   int maxSum = INT_MIN;

//   for(int st=0; st<n; st++){
//     int currSum = 0;
//     for(int end=st; end<n; end++){
//       currSum += arr[end];
//       maxSum = max(currSum, maxSum);

//     }

//   }
// cout << "max subarray sum = " << maxSum << endl;

// return 0;
// }


// Kadane's algorithm
// int main(){
//   int n = 7;
//   int arr[] = {3, -4, 5, 4, -1, 7, -8};
//   int currSum = 0, maxSum = INT_MIN;
//   for(int i=0; i<n; i++){
//     currSum+=arr[i];
//     maxSum = max(currSum, maxSum);
//     if(currSum<0){
//       currSum=0;
//     }
//   }
//   cout<<maxSum;
//   return 0;
// }


// Pair Sum (Brute force approach)
// vector<int> pairSum(vector<int> nums, int target) {
//   vector<int> ans;
//   int n = nums.size();


//   for(int i=0; i<n; i++) {
//     for(int j=i+1; j<n; j++){
//       if(nums[i] + nums[j]==target){
//         ans.push_back(i);
//         ans.push_back(j);
//         return ans;
//       }
//     }

// }
// return ans;
// }

// int main(){
//   vector<int> nums = {2,7,11,15};
//   int target = 17;

//   vector<int> ans = pairSum(nums, target);
//   cout << ans[0] <<","<< ans[1]<<endl;
//   return 0;
// }


// using two pointer approach

vector<int> pairSum(vector<int> nums, int target) {
  vector<int> ans;
  int n = nums.size();

  int i = 0, j =n-1;
  while(i<j){
    int pairSum = nums[i] + nums[j];
    if(pairSum<target){
      i++;
    }
    else if(pairSum>target){
      j--;
    }
    else{
      ans.push_back(nums[i]);
      ans.push_back(nums[j]);
      return ans;
    }
  }
  
return ans;

}
int main(){
  vector<int> nums = {2,7,11,15};
  int target = 17;

  vector<int> ans = pairSum(nums, target);
  cout << ans[0] <<","<< ans[1]<<endl;
  return 0;
}







