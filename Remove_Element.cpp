// Two pointer method and also the optimal method
#include <iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int i =0;
    for(int j=0;j<nums.size();j++){
        if(nums[j] != val){
            nums[i] = nums[j];
            i++;
        }
    }
}

int main(){
      vector<int> nums = {3, 2, 2, 3, 4, 2, 5};
    int val = 2;

    int newLength = removeElement(nums, val);

    cout << "New length: " << newLength << endl;
    cout << "Array after removal: ";
    for (int k = 0; k < newLength; k++) {
        cout << nums[k] << " ";
    }
    cout << endl;
return 0;
}



// Direct STL method---------------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// int removeElement(vector<int>& nums, int val) {
//     nums.erase(remove(nums.begin(),nums.end(),val),nums.end());

//     return nums.size();
// }


// int main(){

// return 0;
// }