#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{1,2,3,4,5};
    for(int i = 0 ; i<arr.size()-1;i++){
        swap(arr[i],arr[i+1]);
    }
    for(int val:arr){
        cout<<val<<" ";
        
    }
}
