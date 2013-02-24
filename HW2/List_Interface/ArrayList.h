#include "List.h"

class ArrayList : public List {
 public:
  ArrayList(int n);
  void AddList(int key);
  void RemoveFromList(int i);
  bool ListIsEmpty();
  void PrintList();
  int SizeList(void);
  void DeleteList(void);
 private:
    int* arr;
    int last;
    int size_arr;
};
