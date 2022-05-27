#include<iostream>
using namespace std;

class Node{
    
    public:
    int data;
    Node* next;

    //Above we have created pointer of node type becuase it points to next node

    // constructor
    Node(int data){
        this -> data=data;
        this -> next=NULL;
    }

    //destructor
    ~Node(){
        int value=this->data;
        
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }

        cout << "MEMORY IS FREE FOR NODE WITH DATA " << value << endl;
    }

};




void insert_at_head(Node* &head, int d){
    Node* temp=new Node(d);
    temp -> next=head;
    head=temp;
}



void insert_at_posn(Node* &head, int position,int d){
    
    if(position==0){
        insert_at_head(head,d);
        return;
    }

    int count=0;
    Node* temp=head;
    Node* tbd=new Node(d);

    while(count<position-1){
        temp = temp -> next;
        count++;
    }

    Node* temp2= temp -> next;

    temp -> next=tbd;
    tbd -> next=temp2;

}



void insert_at_tail(Node* &head, int d){
    Node* temp=head;
    
    while(temp -> next !=NULL){
        temp = temp -> next;
    }

    Node* tbd=new Node(d);
    temp -> next=tbd;
}
 



void deleteNode(int position, Node* &head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start node
        // temp -> next = NULL;
        delete temp;
    }


    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}





void delete_Node_Rec(Node* &head,int posn){

    if(head==NULL){
        return;
    }

    if(posn==0)
    {
        
        if(head->next==NULL){
            head=NULL;
            return;
        }

        Node* temp=head;
        head=head->next;
        temp->next==NULL;
        delete temp;

    }

    delete_Node_Rec(head->next,posn-1);

}


void print(Node* &head){
    
     if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    
    Node* temp=head;

    while(temp!=NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }

    cout << endl;
}




int main(){
    Node *head = new Node(7);
    insert_at_tail(head,39);
    insert_at_tail(head,41);
    insert_at_posn(head,2,9);
    deleteNode(3,head);
    print(head);
}
