#include <stdio.h>
#include "PointerList.h"
#include "ArrayList.h"

int main()
{   int type;
    printf("What type of list would you like to use? (0 - Pointer List; 1 - Array List):");
    scanf("%d",&type);

    List *objectList;
    if (type == 0)
        objectList= new PointerList();
    else {
        int size;
        printf("Insert MaxSize of List:");
        scanf("%d",&size);
        objectList = new ArrayList(size);
    }


    bool flag = false;
    while (!flag){
        printf("\nSelect operation 0 - Add To List; 1 - Remove From List; 2 - Is List Empty?\n");
        printf("3 - Print List; 4 - Size of List; 5 - Delete List; -1 - EXIT:");
        int operation, data;
        scanf("%d",&operation);
        switch(operation){

        case 0:{
             printf("Insert data:");
             scanf("%d",&data);
             objectList->AddList(data);
             break;
        }
        case 1:{
             printf("Insert number of element:");
             scanf("%d",&data);
             objectList->RemoveFromList(data);
             break;
        }
        case 2:{

             if (objectList->ListIsEmpty())
                printf("yes");
             else
                printf("no");
             break;
        }
        case 3:{

             objectList->PrintList();
             break;
        }

        case 4:{

             printf("Size of List is %d",objectList->SizeList());
             break;
        }

        case 5:{

             objectList->DeleteList();
             printf("\nList is deleted");
             flag = true;
             break;
        }

        default:{

             if(operation==-1)
                 flag = true;
             else
                 printf("Wrong command\n");
             break;
     }


    }
   }


}
