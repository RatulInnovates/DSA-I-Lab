#include <iostream>
using namespace std;

int main(){
    int key=6;
    int arr[5]={1,2,3,4,6};
    for(int i=0;i<5;i++){
        if(arr[i]==key)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"Not found";

 
    return 0;
}