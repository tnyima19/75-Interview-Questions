#include<iostream>
using namespace std;
/*
you are given the head of two sorted linked lists lis1 and list2

Merge the two lists in a one sorted list. The list should be made by splicing 
together the nodes of hte first two lists. 
Return  the head of the merged list. 

*/


 //Definition for singly-linked list.
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
    ListNode* curr1 = l1;
    ListNode* curr2 = l2;

    ListNode* finallist = new ListNode();
    ListNode* pointer = finallist;
    while(curr1 != nullptr && curr2 != nullptr){
        if(curr1->val > curr2->val){
            pointer->next = curr2;
            curr2 = curr2->next;
        }else{
            pointer->next = curr1;
            curr1 = curr1->next;

        }   
        pointer = pointer->next;
        
        
    }
    if(curr1 != nullptr){
            pointer->next = curr1;
        }else{
            pointer->next = curr2;
        }

    return finallist->next;



}
int main(){
   
return 0;

}

 