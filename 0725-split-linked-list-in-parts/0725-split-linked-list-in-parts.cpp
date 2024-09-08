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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int i,count=0;
        vector<ListNode*> ans;
        ListNode* ptr=head;
        ListNode* temp=head;
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
        ptr=head;
        if(count<=k)
        {
            while(ptr!=NULL)
            {
                ans.push_back(ptr);
                temp=ptr;
                ptr=ptr->next;
                temp->next=NULL;
            }
            for(i=1;i<=(k-count);i++)
            {
                ans.push_back(NULL);
            }
        }
        else
        {
            int div=count/k;
            int rem=count%k;
            while(ptr!=NULL)
            {
                if(rem!=0)
                {
                    ans.push_back(ptr);
                    for(i=1;i<=div;i++)
                    {
                        ptr=ptr->next;
                    }
                    temp=ptr;
                    ptr=ptr->next;
                    temp->next=NULL;
                    rem--;
                }
                else
                {
                    ans.push_back(ptr);
                    for(i=1;i<div;i++)
                    {
                        ptr=ptr->next;
                    }
                    temp=ptr;
                    ptr=ptr->next;
                    temp->next=NULL;
                }
            }
        }
        return ans;
    }
};