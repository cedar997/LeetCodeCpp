using namespace std;
#define NULL 0
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution237 {
public:
    // 237. 删除链表中的节点
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
};