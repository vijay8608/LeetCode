/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
*/



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode * list;
        
        list = new ListNode(0);
        
        int carry = 0, x = 0, y = 0, sum = 0;
        
        ListNode * temp1;
        ListNode * temp2;
        
        ListNode * head;
        
        head = list;
     
        temp1 = l1;
        temp2 = l2;
        
        
        while (temp1 != nullptr || temp2 != nullptr)
        {
            if (temp1 != nullptr)
            {
                x = temp1->val;
            }
            else
            {
                x = 0;
            }
            
            if (temp2 != nullptr)
            {
                y = temp2->val;
            }
            else
            {
                y = 0;
            }
            
            sum = carry + x + y;
            
            carry = sum/10;
            
            list->next = new ListNode(sum % 10);
            list = list->next;
            
            if (temp1 != nullptr)
            {
                temp1 = temp1->next;
            }
            
            if (temp2 != nullptr)
            {
                temp2 = temp2->next;
            }         
        }
        
        if (carry != 0)
        {
            list->next = new ListNode(carry);
        }
        
        return head->next;
    }
};