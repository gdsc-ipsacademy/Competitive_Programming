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

class compare{
    public:
    bool operator()(ListNode* a, ListNode *b)
    {
        return a->val > b->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*> ,compare>minHeap;
        
        int k= lists.size();
        if(k==0) return NULL;
        
        // frist element of every linked  list ot insert krdo heap me
        
        for( int  i=0;i<k; i++)
        {
            if( lists[i] !=NULL){
                minHeap.push(lists[i]);
            }
        }
        ListNode * head=NULL;
        ListNode* tail=NULL;
        
        while(!minHeap.empty())
        {
            ListNode* temp = minHeap.top();
            minHeap.pop();
            
            // temp may or may not be first element fo linkedlsit
            
            if(head==NULL)
            {
                // temp ->  first element of linkedlist
                head=temp;
                tail=temp;
                
                if(tail->next !=NULL){
                    minHeap.push(tail->next);
                }
            }
            else
            {
                
                tail->next=temp;
                tail=temp;
                
                if(tail->next !=NULL)
                    
                {
                    minHeap.push(tail->next);
                }
                
                }
            
        }
        return head;
        
        
    }
};