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

    ListNode* reverseList(ListNode* head) {
        //recursive
            if(head==NULL || head->next==NULL) return head;
        ListNode *newHead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right) return head;
        ListNode* temp = head;
        ListNode* a=NULL;
        ListNode* b=NULL;
        ListNode* c=NULL;
        ListNode* d=NULL;
        int i = 1;
        while(temp){
        if(i==left-1) a = temp;
        if(i==left) b = temp;
        if(i==right) c = temp;
        if(i==right+1) d = temp;
        temp = temp->next;
        i++;
        }
        if(a) a->next = NULL;
        c->next = NULL;
        c = reverseList(b);
        if(a) a->next = c;
        b->next = d;
        if(a) return head;
        return c;
    }