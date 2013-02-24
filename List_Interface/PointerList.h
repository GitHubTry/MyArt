#include "List.h"

class PointerList : public List {
  public:
    PointerList();
    void AddList(int key);
    void RemoveFromList(int i);
    bool ListIsEmpty(void);
    void PrintList(void);
    int SizeList(void);
    void DeleteList(void);
  private:
    ElementList* head;
};
