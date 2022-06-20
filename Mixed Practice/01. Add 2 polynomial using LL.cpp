#include<iostream>
using namespace std;


class Node{
    public:
    int coefficient;
    int power;
    Node* next;
    
    Node(int coefficient, int power){
        this->coefficient=coefficient;
        this->power=power;
        this->next=NULL;
    }
};

void print(Node *head){
  cout<<"Linked List"<<endl;
  while(head!=NULL){
    cout<<" "<<head->coefficient<<"x"<<"^"<<head->power;
    head = head->next;
  }
}

void insert(Node *head, int coefficient, int power){
  Node *new_node = new Node(coefficient,power);
  while(head->next!=NULL){
    head = head->next;
  }
  head->next = new_node;
}

void addPolynomials(Node*head1,Node*head2){
    
    // cout<<"IAM HERE"<<endl;
    
    if(head1==NULL && head2==NULL){
        return;
    }
    
    else if(head1->power == head2->power){
        cout<<" "<<head1->coefficient+head2->coefficient<<"x"<<"^"<<head1->power<<" ";
        addPolynomials(head1->next,head2->next);
    }
    
    else if(head1->power > head2->power){
        cout<<" "<<head1->coefficient<<"x"<<"^"<<head1->power;
        addPolynomials(head1->next,head2);
    }
    
     else if(head1->power < head2->power){
        cout<<" "<< head2->coefficient <<"x"<<"^"<<head2->power;
        addPolynomials(head1,head2->next);
    }
    
}

int main(){
  
  Node *head=new Node(5,2);
//   insert(head,7,3);
//   insert(head,3,2);
  insert(head,2,1);
//   insert(head,6,0);
  Node *head2 = new Node(6,2);
  insert(head2,4,1);
  print(head);
  cout<<endl;
  print(head2);
  cout<<endl<<"Addition:"<<endl;
  addPolynomials(head,head2);
  return 0;
}

