#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        next = nullptr;
    }
};
void print(Node* head){
    if(!head) return;
    cout<<head->val<<endl;
    print(head->next);
}
void isThere(Node* head, int target){
    int idx = 0;
    Node* temp = head;
    while(temp!=nullptr){
        idx++;
        if(temp->val==target){
            
            cout<<"found at: "<<idx;
            return;
        }
        temp=temp->next;
        
    }
    cout<<"Not found";
}

Node* arraytoList(int * arr, int n){
    
    Node *head = new Node(arr[0]);
    Node* idx = head;
    
    for(int i=1;i<n;i++){
        Node *temp = new Node(arr[i]);
        idx->next = temp;
        idx = temp;
    }
    
    print(head);
    return head;

}

void deleteNode(Node * head, int idx){
    Node * temp=head;
    int i=0;
    while(temp->next!=nullptr){
        i++;
        if(i==idx-1){
            temp->next=temp->next->next;


        }
        temp=temp->next;

    }
}



int main(){
   

    int arr[]={1,2,3,4,5,6};
    Node *head = arraytoList(arr, 6
    );
    
    // isThere(head, 22);
    deleteNode(head,2);
    print(head);





    
    return 0;
}