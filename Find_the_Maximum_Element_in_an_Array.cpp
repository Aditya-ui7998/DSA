#include <iostream>
using namespace std;

int findLargest(int arr[], int n){
    int largest = arr[0];
    for(int i=0;i<n;i++){
if(arr[i]>largest){
    largest=arr[i];
}
    }
    return largest;
}

int main(){
int arr[] = {2,5,7,3,6,9};
int n = sizeof(arr)/ sizeof(arr[0]); 
int max = findLargest(arr,n);
cout<<"The largest number is:"<< max <<endl;

return 0;
}
