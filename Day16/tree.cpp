#include<iostream>
using namespace std;

class TreeNode
{
   public:
    
    int data;
    TreeNode *left;
    TreeNode *right;
    
    public:   
    TreeNode(int x)
    {
        this->data = x;
        left = right = NULL;
    }
};

int main()
{
    TreeNode *t1 = new TreeNode(1);
     TreeNode *t2 = new TreeNode(2);
      TreeNode *t3 = new TreeNode(3);

      t1-> left = t2;
      t2-> right = t3;

      cout << t1->data << endl;
      cout << t2->data << endl;
      cout << t3-> data << endl;

      return 0;
     

     

}