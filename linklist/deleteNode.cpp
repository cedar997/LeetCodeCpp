#include "Solution.hpp"
    // 237. ɾ�������еĽڵ�
void deleteNode(ListNode* node) {
    ListNode* p = node;
    ListNode* p_next = p->next;
    if (p_next == NULL) {
        p = NULL;
        return;
    }
    p->val = p_next->val;
    p->next = p_next->next;
    p_next = NULL;
}
