#include <iostream>
using namespace std;

int main(){
    int key=3;
    int arr[7]={2,3,5,7,10,23,33};
  
  //binary search
    int l=0;
    int r=6;
    int idx=-1;
    while(l<=r){
        int midIdx = (l+r)/2;
        if(arr[midIdx]== key){
            idx=midIdx;
            break;
        }
        else if(arr[midIdx]>key){
            
            r=midIdx-1;
        }
        else{
            l=midIdx+1;
        }

    }

    if(idx==-1)
    cout<<"Not found";
    else
    cout<<idx;

    return 0;


}