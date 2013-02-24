#include "PointerList.h"
#include <stdio.h>

PointerList::PointerList(void){
  head = NULL;
}

bool PointerList::ListIsEmpty(void){

     return (head == NULL);
}

int PointerList::SizeList(void){

    int size = 0;
    if (!ListIsEmpty()){
        ElementList* current = head;
        while (current->next != NULL){
           current = current->next;
           size++;
        }
        size++;
    }
    return size;
}


void PointerList::AddList(int key){

    if (!ListIsEmpty()){
    ElementList* current = head;
     while (current->next!=NULL){
         current = current->next;
     }
     ElementList* pNew = new ElementList;
     pNew->next = NULL;
     pNew->data = key;
     current->next = pNew;
    }
     else {
       ElementList* pNew = new ElementList;
       pNew->next = NULL;
       pNew->data = key;
       head = pNew;
    }


}

void PointerList::RemoveFromList(int i){

    if(!ListIsEmpty()){
        if (!(i==1)){
            ElementList* current = head;
            for (int j=2; j<i; j++){
                if (current->next != NULL)
                    current = current->next;
            }

            if (current->next != NULL){
                ElementList* del = new ElementList;
                del = current->next;
                current->next = current->next->next;
                delete(del);
            }
        }
        else {
            ElementList* del = new ElementList;
            del = head;
            head = head->next;
            delete(del);
        }

    }
}


void PointerList::PrintList(void){

    if(!ListIsEmpty()) {
        ElementList*current = head;
        printf("%d\n", current->data);
        while (current->next != NULL){
            current = current->next;
            printf("%d\n", current->data);
        }
    }
    else printf("List is Empty");

}

void PointerList::DeleteList(){

  ElementList* current = head;
  ElementList* del = head;
   while (current->next!=NULL){
     del = current;
     current = current->next;
     delete(del);
     }
   delete(current);
}
