#include <iostream>
using namespace std;

// Interface or Abstract Class
class SortBehavior
{
public:
    virtual void sort() const = 0;
};

class Merge : public SortBehavior
{
public:
    void sort() const override
    {
        cout << "Merge Sort()" << endl;
    }
};

class Quick : public SortBehavior
{
public:
    void sort() const override
    {
        cout << "Quick Sort()" << endl;
    }
};

class Heap : public SortBehavior
{
public:
    void sort() const override
    {
        cout << "Heap Sort()" << endl;
    }
};

// Interface or Abstract class
class SearchBehavior
{
public:
    virtual void search() const = 0;
};

class Sequential : public SearchBehavior
{
public:
    void search() const override
    {
        cout << "Sequential Search()" << endl;
    }
};

class BinaryTree : public SearchBehavior
{
public:
    void search() const override
    {
        cout << "BinaryTree Search()" << endl;
    }
};

class HashTable : public SearchBehavior
{
public:
    void search() const override
    {
        cout << "HashTable Search()" << endl;
    }
};

// Context
class Collection
{
public:
    Collection() {}
    void set_sort(SortBehavior *s)
    {
        m_sort = s;
    }

    void set_search(SearchBehavior *s)
    {
        m_search = s;
    }

    void sort() const
    {
        m_sort->sort();
    }

    void search() const
    {
        m_search->search();
    }

private:
    SortBehavior *m_sort;
    SearchBehavior *m_search;
};

int main()
{
    Merge merge;
    Quick quick;
    Heap heap;

    Sequential sequential;
    BinaryTree binaryTree;
    HashTable hashTable;

    Collection colA;
    colA.set_sort(&merge);
    colA.sort();

    Collection colB;
    colB.set_search(&binaryTree);
    colB.search();
}