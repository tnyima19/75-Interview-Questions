#include<iostream>
using namespace std;


struct ListNode{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// first count the number of nodes, 

ListNode* removeNthFromEnd(ListNode* head, int n){
   ListNode* dummy = new ListNode();
    dummy->next = head;
    ListNode* currF = head;
    ListNode* currS = dummy;

    for(int i=0;i<n;++i){
        currF = currF->next;
    }

    while(currF != nullptr){

        currF = currF->next;
        currS = currS->next;
    }

    currS->next = currS->next->next;

    return dummy->next;


    
}