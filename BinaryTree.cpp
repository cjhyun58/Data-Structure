#include<iostream>

typedef int BTdata;

struct BTreeNode
{
	BTdata data;
	BTreeNode * left;
	BTreeNode * right;
};

BTreeNode * MakeBTreeNode(){
	BTreeNode * nd = new BTreeNode;
	nd->left = NULL;
	nd->right = NULL;
	return nd;
}
BTdata GetData(BTreeNode * bt){
	return bt->data;
}
void SetData(BTreeNode * bt, BTdata data){
	bt->data = data;
}
BTreeNode * GetLeftSubTree(BTreeNode * bt){
	return bt->left;
}
BTreeNode * GetRightSubTree(BTreeNode * bt){
	return bt->right;
}
void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub){
	if(main->left != NULL)
		delete main->left;

	main->left = sub;
}
void MakeRightSubTree(BTreeNode * main, BTreeNode * sub){
	if(main->right != NULL)
		delete main->right;

	main->right = sub;
}
int main(){
	BTreeNode * bt1 = MakeBTreeNode();
	BTreeNode * bt2 = MakeBTreeNode();
	BTreeNode * bt3 = MakeBTreeNode();
	BTreeNode * bt4 = MakeBTreeNode();

	SetData(bt1, 1);
	SetData(bt2, 2);
	SetData(bt3, 3);
	SetData(bt4, 4);

	MakeLeftSubTree(bt1, bt2);
	MakeRightSubTree(bt1, bt3);
	MakeLeftSubTree(bt2, bt4);
}