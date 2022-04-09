#include <iostream>

using namespace std;

template <typename T>

struct Node{
    T valor;
    Node* siguiente;
    Node* anterior;
    Node(T v, Node* s=nullptr,Node* a=nullptr): valor(v),siguiente(s),anterior(a){}
};


