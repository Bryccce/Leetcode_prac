#include<vector>
#include<iostream>
using namespace std;


//Definition for singly-linked list.
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//headpoint first, then following points
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
       while(head != NULL && head->val == val){
            ListNode* temp = head;
            head = head->next;
            delete temp;
       }
       ListNode* cur = head;
       while(cur != NULL && cur->next != NULL){
            if(cur->next->val == val){
                ListNode* temp = cur->next;
                cur->next = cur->next->next;
                delete temp;
            }
            else{
                cur = cur->next;
            }
       }
       return head;
    }
};

//dummyhead
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
       ListNode* dummyhead = new ListNode();
       dummyhead->next = head;
       ListNode* cur = dummyhead;
       while(cur->next != NULL){
           if(cur->next->val == val){
               ListNode* temp = cur->next;
               cur->next = cur->next->next;
               delete temp;
           }
           else{
               cur = cur->next;
           }
       }
       head = dummyhead->next;
       delete dummyhead;
       return head;
    }
};