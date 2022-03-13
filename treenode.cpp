#include<iostream>
using namespace std;
struct treenode
{
    int val;
    struct treenode *l,*r;
}*root,*p;


void ts(struct treenode* node);
int main()
{
int i=1;

root=(struct treenode *)malloc(sizeof(struct treenode));
root->val=i;
p=root;
for(;i<4;i++)
{
p->l=(struct treenode *)malloc(sizeof(struct treenode));
p->l->val=i+1;
p=p->l;
p->l=NULL;
p->r=NULL;
}
p=root;
for(;i<15;i++)
{
p->r=(struct treenode *)malloc(sizeof(struct treenode));
p->r->val=i+1;
p=p->r;
p->l=NULL;
p->r=NULL;
}


//遍历
ts(root);



    return 0;
}


void ts(struct treenode* node)
{
if(!node)
return ;
cout<<node->val<<endl;
ts(node->l);
ts(node->r);



}