#include <vector>

using namespace std;
struct Tree
{
    int data;
    struct Tree* left, * right;
};

struct Tree* newtree(int key)
{
    struct Tree* temp= new Tree;
    temp->data=key;
    temp->left=nullptr;
    temp->right=nullptr;
    return temp;
}

Tree* insert(Tree* tree, int key)
{
    if (tree == nullptr)
        return newtree(key);

    if (key < tree->data)
        tree->left = insert(tree->left, key);
    else
        tree->right = insert(tree->right, key);

    return tree;
}

template <typename T>
void store(Tree* root, T* a, int &i)
{
    if (root != nullptr) {
        store(root->left, a,i);
        a[i++]=(root->data);
        store(root->right, a,i);
    }
}

template <typename T>
void TreeSort(vector<T>& a)
{
    struct Tree* root=nullptr;
    root = insert(root, a.size()-1);
    for (int i=1; i<a.size(); i++)
        insert(root, a.at(i));
    int i=0;
    store(root, a.data(),i);
}

vector<int> TreeSortByIssabek(vector<int> a) {
    TreeSort(a);
    return a;
}

vector<double> TreeSortByIssabek(vector<double> a) {
    TreeSort(a)
    return a;
}
