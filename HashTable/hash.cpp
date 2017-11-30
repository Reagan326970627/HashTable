// test hash table with linear open addressing

#include <iostream>
#include "hash.h"

using namespace std;

class element {

   public:
      operator long() const {return key;}
      int data;
      long key;
};

int main()
{
   HashTable<element, long> h(11);
   element e;
   e.key = 80;
   h.Insert(e);
   e.key = 40;
   h.Insert(e);
   e.key = 65;
   h.Insert(e);
   h.Output();
   e.key = 58;
   h.Insert(e);
   e.key = 24;
   h.Insert(e);
   cout << ' ' << endl;
   h.Output();
   e.key = 2;
   h.Insert(e);
   e.key = 13;
   h.Insert(e);
   e.key = 46;
   h.Insert(e);
   e.key = 16;
   h.Insert(e);
   e.key = 7;
   h.Insert(e);
   e.key = 21;
   h.Insert(e);
   cout << ' ' << endl;
   h.Output();
   e.key = 80;
   try {h.Insert(e);}
   catch (BadInput)
	   {cout << " Duplicate Input for "<< e.key << endl;}
   e.key = 99;
   try {h.Insert(e);}
   catch (NoMem)
      {cout  << " No memory for 99" << endl;}


   return 0;
}
