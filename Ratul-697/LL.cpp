#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

Node * Insert(Node* head){
    
    int val;
    cin>>val;

    if(head==NULL&&val!=-1)
    {
        Node* New =new Node(val);
        head=New;
    }
    Node *temp=head;
    
    while (val!=-1)
    {
        
        if (temp->next == nullptr) {
            Node* newNode = new Node(val);
            temp->next = newNode;
            break; // Exit after inserting the new node
        }
        // Otherwise, keep traversing the list
        temp = temp->next;
        cin >> val;
        
    }


    return head;
    
    
}

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

void reverseLL(Node *head)
{
   
    

}

void Print(Node* head){
    Node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }

}
void Print_rec(Node* head){
    Node *idx=head;
    if(idx==NULL) return;

    cout<<idx->data<<endl;
    Print_rec(idx->next);
    


}

int main(){
    int A[5]={2,5,3,4,5};
    Node *head = arrayToList(A,5);
    reverseLL(head);
    Print(head);
    
    

    



    return 0;
}