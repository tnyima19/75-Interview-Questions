#include<iostream>
using namespace std; 

/*
Given the head of a singly linked list, reverse the list, 
and return the reversed list. 

Example: 
1-> 2-> 3-> 4-> 5
5->4 ->3-> 2-> 1



*/
struct ListNode{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}

};

ListNode* reverseList(ListNode* head){
    if (head->next == nullptr){
        return head;
    }
    ListNode* prev = nullptr;
    ListNode* curr = head;
    ListNode* next_;

    while(curr != nullptr){
        next_ = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next_;
        
        
    }
    head = prev;
    return head;


}

int main(){


    return 0;
}