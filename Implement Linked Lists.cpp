#include<bits/stdc++.h>
using namespace std;

class Node{
    
    public:
    int data;
    Node* next;


    Node(int data){
        this -> data=data;
        this -> next=NULL;
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

void print_rev(Node* &head){
    
     if(head == NULL) {
        return ;
    }
    
    print_rev(head->next);
    
    cout << head -> data << " ";
    
}

int main(){
    Node *head = new Node(7);
    insert_at_tail(head,39);
    insert_at_tail(head,41);
    insert_at_posn(head,2,9);
    delete_Node_Rec(head,3);
    print(head);
    print_rev(head);
}

 
