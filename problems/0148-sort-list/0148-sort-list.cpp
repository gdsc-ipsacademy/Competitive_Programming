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
class Solution {
public:
    ListNode *findMid(ListNode *head)
    {
        ListNode*slow=head;
        ListNode*fast=head->next;
        
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    
    
    
    
    
    
    
    // from question no 21 merge two sorted linked list
    
      ListNode* merge(ListNode* left, ListNode* right) {
        if(left==0) return right;
        if(right==0)return left;
        
        ListNode * ans= new ListNode(-1);
        ListNode *mptr=ans;
        
        while(left && right)
        {
            if(left->val <=right->val)
            {
                mptr->next=left;
                mptr=left;
                left=left->next;
            }
            else
            {
                mptr->next=right;
                mptr=right;
                right=right->next;
            }
        }
        
        if(left)
        {
            mptr->next=left;
            // mptr=left;
            // left=left->next;
        }
        
           if(right)
        {
            mptr->next=right;
            mptr=right;
            right=right->next;
        }
        return ans->next;
    }
    
    
    
    // main function
    
    ListNode* sortList(ListNode* head) {
        // check for edge case
        if(head==0 || head->next==0)
        {
            return head;
        }
        
        // Break linkedlist into two halves using mid node
        ListNode *mid=findMid(head);
        
        
        ListNode *left=head;
        
        ListNode * right=mid->next; 
        mid->next=0;
        
        
         left=sortList(left);
        right=sortList(right);
        
        
        // merge both left and right list
        ListNode* mergelist=merge(left,right);
        return mergelist;
        
    }
};