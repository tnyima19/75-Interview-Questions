#include<iostream>
using namespace std;



/*
Tortoise here method , 
why it wordsk, 

slow and fasts poiter, 
s* 
f* goes two steps at a time, 
if f and s meet again it is a cycle, 
only move pointers
*/

struct ListNode{
    int val;
    ListNode* next;
    ListNode*(int x) : val(x), next(nullptr) {}
};

bool LinkedListCycle(ListNode* head){
    ListNode* fast = head;
    ListNOde* slow = head;

    while(fast != nullptr && fast->next != nullptr ){
        fast = fast->next;
        fast= fast->next;
        slow = slow->next;
        if (fast == slow){
            return false;
        }
    }

    return true;

}


