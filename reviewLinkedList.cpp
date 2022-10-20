#include<iostream>
#include<vector>

using namespace std;


/*
REVIEW DAY 

big O is upper bound, 
worst case: 
average case: 

LC 2. Add two numbers. 
have thre local variables. 
LC 61 : rotate teh linied list . 
by k places, 


LC 206


Find a loop in a linked list. 


TREES
LC 104 
LC 144


HEAPS kth largest element 
lC 215


*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == nullptr || head->next == nullptr || k== 0)
            return head;
        
        int i=0;
        ListNode* curr = head;
        ListNode* tail = curr->next; 
        int length = 1;
        while(tail->next != nullptr){
            //prev = next;
            tail = tail->next;
            ++length;
        }
        cout<<length<<endl;
        int cutting_place = length - k -1;
        ListNode* curr1 = head;
        ListNode* curr2;
        
        while(i<cutting_place){
            curr1 = curr1->next;
            ++i;
        }
        curr2 = curr1->next;
        curr1->next = nullptr;
        tail->next = head;
        head = curr2;
    
        
        return head;
    }

int main(){
    int i =1;
    ListNode* fhead = new ListNode();
    curr = fhead;
    while(i<5){
        ListNode* new_node = new ListNode(i);
        curr->next = new_node;
        ++i;
    }

    ListNode r;
    r.rotateRight(fhead);

    return 0;

}