class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        // Initialize pointers for traversing the input linked lists
        ListNode *l3 = l1, *l4 = l2;

        // Variable to store the carry from the addition
        int carry = 0;

        // Create the first node of the result linked list with the sum of the first digits
        ListNode *temp = new ListNode((l3->val + l4->val) % 10);

        // Pointer to traverse the result linked list
        ListNode *l5 = temp;

        // Calculate the initial carry
        carry = (l3->val + l4->val) / 10;

        // Move to the next nodes in the input linked lists
        l3 = l3->next;
        l4 = l4->next;

        // Loop until both linked lists are fully traversed and no carry remains
        while (l3 || l4 || carry == 1)
        {
            if (l3 && l4) // Case when both linked lists have nodes
            {
                // Add the values of the current nodes and the carry
                l5->next = new ListNode((l3->val + l4->val + carry) % 10);

                // Update the carry
                carry = (l3->val + l4->val + carry) / 10;

                // Move to the next nodes in both linked lists
                l3 = l3->next;
                l4 = l4->next;

                // Move to the next node in the result linked list
                l5 = l5->next;
            }
            else if (!l4 && l3) // Case when only the first linked list has nodes remaining
            {
                // Add the value of the current node and the carry
                l5->next = new ListNode((l3->val + carry) % 10);

                // Update the carry
                carry = (l3->val + carry) / 10;

                // Move to the next node in the first linked list
                l3 = l3->next;

                // Move to the next node in the result linked list
                l5 = l5->next;
            }
            else if (!l3 && l4) // Case when only the second linked list has nodes remaining
            {
                // Add the value of the current node and the carry
                l5->next = new ListNode((l4->val + carry) % 10);

                // Update the carry
                carry = (l4->val + carry) / 10;

                // Move to the next node in the second linked list
                l4 = l4->next;

                // Move to the next node in the result linked list
                l5 = l5->next;
            }
            else // Case when no nodes are left in either linked list but a carry remains
            {
                // Add the carry as a new node
                l5->next = new ListNode(carry);

                // Reset the carry to 0
                carry = 0;
            }
        }

        // Return the head of the result linked list
        return temp;
    }
};