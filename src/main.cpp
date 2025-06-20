// Copyright 2021 NNTU-CS
#include <iostream>
#include <string>

#include "bst.h"

void makeTree(BST<std::string>&, const char*);
void printFreq(BST<std::string>&);

int main() {
  BST<std::string> tree;
  makeTree(tree, "src/war_peace.txt");
  printFreq(tree);
  std::cout << "Depth: " << tree.depth() << '\n';
  return 0;
}
