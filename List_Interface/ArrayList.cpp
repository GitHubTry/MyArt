#include "ArrayList.h"
#include <stdio.h>

ArrayList::ArrayList(int n){
    arr = new int[n];
    size_arr = n;
    last = -1;
}

bool ArrayList::ListIsEmpty(){
    return (last == -1);
}

void ArrayList::AddList(int key){
  last++;
  if (last < size_arr)
   arr[last] = key;
  else{
      last--;
      printf("List is overflown");
  }
}

void ArrayList::RemoveFromList(int i){
    for (int j=i-1; j<last; j++)
        arr[j] = arr[j+1];
    last--;

}

int ArrayList::SizeList(void){
    return last+1;
}

void ArrayList::PrintList(){
    if (!ListIsEmpty()){
    for (int j=0; j<=last; j++)
        printf("%d\n",arr[j]);
    }
    else printf("List Is Empty");
}

void ArrayList::DeleteList(){
    delete [] arr;
}




