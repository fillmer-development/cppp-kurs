//===----------------------------------------------------------------------===//
//
// Philipp Schubert
//
//    Copyright (c) 2017 - 2021
//    Secure Software Engineering Group
//    Heinz Nixdorf Institute
//    Paderborn University
//    philipp.schubert@upb.de
//
//===----------------------------------------------------------------------===//

#include <iostream>

struct Node
{
  int data;
  Node *next;
  Node(int i) : data(i), next(nullptr) {}
  friend std::ostream &operator<<(std::ostream &os, const Node &n)
  {
    os << "Node\n"
       << "\tdata: " << n.data << "\n\tthis: " << &n << "\n\tnext: " << n.next;
    return os;
  }
};

void addElement(Node **head, int data)
{

  if ((**head).next == nullptr)
  {
    Node newNode = Node(data);
    (**head).next = &newNode;
  }
  else
  {
    addElement(&((**head).next), data);
  }
}

void printList(const Node *head)
{
  if ((*head).next == nullptr)
  {
    std::cout << (*head).data << "\n";
  }
  else
  {
    std::cout << " " << (*head).data;
    printList((*head).next);
  }
}

void deleteList(Node *head)
{
  if ((*head).next != nullptr)
  {
    deleteList(head->next);
  }
  delete head;
}

int main()
{
  Node *list = nullptr;
  addElement(&list, 1);
  addElement(&list, 2);
  addElement(&list, 3);
  addElement(&list, 4);
  printList(list);
  deleteList(list);
  return 0;
}
