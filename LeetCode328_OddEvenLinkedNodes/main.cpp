//
//  main.cpp
//  LeetCode328_OddEvenLinkedNodes
//
//  Created by Rui on 1/6/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* odd = head;
        ListNode* even = head->next;
        
        while(even && even->next)
        {
            ListNode* temp = even->next;
            
            even->next = temp->next;
            temp->next = odd->next;
            odd->next = temp;
            
            odd = odd->next;
            even = even->next;
        }
        
        return head;
        
    }
};
