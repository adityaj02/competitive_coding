class Solution {
public:

    ListNode* revlist(ListNode* head)
    {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head)
    {
        if(!head || !head->next)
            return true;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        if (fast) // odd length
            slow = slow->next;

        ListNode* second = revlist(slow);

        ListNode* first = head;
        ListNode* temp = second;

        while(temp)
        {
            if(first->val != temp->val)
            {
                revlist(second);   // restore if needed
                return false;
            }

            first = first->next;
            temp = temp->next;
        }

        revlist(second); // restore if needed

        return true;
    }
};