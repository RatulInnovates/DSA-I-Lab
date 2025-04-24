#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};
Node* arrayToList(int *arr, int n){
    Node *head = new Node(arr[0]);
    Node *temp=head;
    
 
 
    for(int i=1;i<n;i++){
     Node * New= new Node(arr[i]);
     temp->next = New;
     temp = New;
 
    }
 
    return head;
 
    
 }

 int cycleDetect(Node* head){
    Node* fast = head;
    Node* slow = head;
    
    int idx = 0;

    while (fast->next!=nullptr &&fast->next->next!=nullptr)
    {
        if(idx>0 && fast == slow){
            return idx;
        }
        slow = slow->next;
        fast = fast->next->next;
        idx++;
    }
    return -1;
    


 }

int main(){
    int arr [] = {1, 3, 5, 4,6,4};
    Node* head = arrayToList(arr, 6);

    //making cycle
    Node* temp = head;
    while(temp->next!=nullptr)
    temp=temp->next;
    temp->next = head->next;


    if(cycleDetect(head)!=-1)
    cout<<"Cycle at: "<< cycleDetect(head);

    else
    cout<<"No cycle detected";





}