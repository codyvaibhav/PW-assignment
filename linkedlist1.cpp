#include <stdio.h>
#include <iostream>
#include <vector>
#include<cmath>
using namespace std;
class node{
 public:    
   int val;
   node *next;
   //constructors
   node(int val){
    this->val = val;
    this->next = NULL;
   }
};
void display(node a){
    node temp = a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp = *(temp.next);
    }
}

int main(){
    // node a(10);
    // node b(20);
    // node c(30);
    // a.next = &b;
    // b.next = &c;
    node *a = new node(10);
    node *b = new node(20);
    node *c = new node(30);
    a->next = b;
    b->next = c;
    node* temp = a;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
    display(*a);
}