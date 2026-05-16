#include<iostream>
using namespace std;
   
  class Solution {
public:
    
ListNode *Slow *Fast = head;
while(fast && fast.next)
{
    Slow = Slow.next;
    Fast = Fast.next.next;
}
};
return Slow;

