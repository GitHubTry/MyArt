#pragma once


struct ElementList{
  ElementList* next;
  int data;
};

class List{
 public:
    virtual void AddList(int) =0;
    virtual void RemoveFromList(int) =0;
    virtual bool ListIsEmpty() = 0;
    virtual void PrintList() = 0;
    virtual int  SizeList() = 0;
    virtual void DeleteList() = 0;
};

