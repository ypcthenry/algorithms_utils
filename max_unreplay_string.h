#include<stdlib.h>
#include<stdio.h>
typedef int index;
struct Maxfirstnode{
  int Maxcount;
  int location;
};
typedef struct Maxfirstnode Maxnode;
index hash(char key,int tablesize){
  return (key -'a') % tablesize;
}
Maxnode midstring(char *s,int len){
  struct tablenode{
    int exist;
    int stringlocation;
  };
  typedef struct tablenode node;
  node  hashtable[32] = {0};
  char *p = s;
  int count = 0;
  Maxnode maxnode = {0};
  for(int i = 0; i < len; ++i){
    int location = hash(*p,32);
    if(hashtable[location].exist == 0){
      hashtable[location].stringlocation = i;
      hashtable[location].exist = 1;
      count++;
    }
    else {
      count = i - hashtable[location].stringlocation;
      hashtable[location].stringlocation = i;
    }
    if(count >maxnode. Maxcount){
     maxnode.Maxcount = count;
     maxnode.location = i;
    }
    p++;
  }
  return maxnode;
}


      
      
