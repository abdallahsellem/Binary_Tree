struct node {
    int data;
    node* left;
    node* right;
};
node *root = nullptr;
void Insert_Element(node* pare,int value );
bool IsEmpty(node* pare);
void BFS(node* pare);
void PostOrder(node* pare);
void PreOrder(node* pare);
void InOrder(node* pare);