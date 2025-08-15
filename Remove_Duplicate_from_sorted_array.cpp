#include <iostream>
#include <vector>
using namespace std;

int removeDuplicate(vector <int> & n){
if(n.empty()) return 0;
int i =0;
for(int j=1;j<n.size();j++){
    if(n[j] != n[i]){
        i++;
        n[i] = n[j];
    }
}
return i+1;
}

int main() {
    vector<int> nums = {1,1,2,4,5,6,6,7};
    int length = removeDuplicate(nums);

    cout << "Number of unique elements: " << length << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < length; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
