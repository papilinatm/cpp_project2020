#include <vector>

using namespace std;
struct Tree
{
    int data;
    struct Tree* left, * right;
};

struct Tree* newtree(int key)
{
    struct Tree* temp = new Tree;
    temp->data = key;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
Tree* insert(Tree* tree, int key)
{
    if (tree == NULL) return newtree(key);
    if (key < tree->data)
        tree->left = insert(tree->left, key);
    else
        tree->right = insert(tree->right, key);
    return tree;
}
void store(Tree* root, int a[], int& i)
{
    if (root != NULL)
    {
        store(root->left, a, i);
        a[i++] = root->data;
        store(root->right, a, i);
    }
}

void TreeSort(vector<int>& a)
{
    struct Tree* root = NULL;
    root = insert(root, a[0]);
    for (size_t i = 1; i < a.size(); i++)
        insert(root, a[i]);
    int i = 0;
    store(root, a.data(), i);
}

vector<int> TreeSortByIssabek(vector<int> a) {
    TreeSort(a);
    return a;
}

vector<double> TreeSortByIssabek(vector<double> a) {
    return a;
}