
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
ListNode* list1= l1; ListNode* list2= l2; int carry=0;
ListNode* res= new ListNode(0); ListNode* curr= res;
while( list1!=nullptr || list2!=nullptr){
    int sum= carry;
    if( list1!=nullptr){ sum= sum+ list1->val;}
    if( list2!=nullptr){ sum= sum+ list2->val;}
    carry= sum/10;
    ListNode* ans= new ListNode(sum%10);
    curr->next= ans;
    curr= curr->next;
    if( list1!=nullptr){list1= list1->next;}
    if(list2!= nullptr){ list2= list2->next;}
}
if (carry){
    ListNode* ans= new ListNode(carry);
    curr->next= ans;
}
return res->next;
    }
};
    