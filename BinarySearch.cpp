// elements should be in sorted form
#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n, int key){
    int l=0;
    int h=n;
    while(l<=h){
        int mid=(l+h)/2;
        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid]>key){
            
            h=mid-1;
        }
        else{
            l=mid+1;
        
        }
    }
    return -1;

}
                                        // time complexity O(log(n)base2)
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<BinarySearch(arr,n,key);
    return 0;
}
