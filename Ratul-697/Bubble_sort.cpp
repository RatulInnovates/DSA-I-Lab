#include <iostream>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // bubble sort
    
    int runs=0;
    bool flag=true;
    for(int j=0;j<n-1;j++){
        runs++;
        
        for(int i=0;i<n-i-1;i++){
            

            if(arr[i]>arr[i+1])
            {
                flag=false;
                int tmp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=tmp;
            }
           
            
        }
        if(flag)
        break;
    }

    cout<<runs<<"runs"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;

    }

    

    return 0;
}