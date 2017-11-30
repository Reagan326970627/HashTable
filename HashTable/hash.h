
// file hash.h
#ifndef HashTable_
#define HashTable_

#include <iostream>
#include <stdlib.h>
#include "xcept.h"

using namespace std;

template<class E, class K>
class HashTable {
   public:
      HashTable(int divisor = 11); 
      ~HashTable() {delete [] ht;
                    delete [] empty;}
      bool Search(const K& k, E& e) const;
      HashTable<E,K>& Insert(const E& e);
      void Output();// output the hash table
   private:
      int hSearch(const K& k) const;
      int D; // hash function divisor (array size)
      E *ht; // hash table array (buckets)
      bool *empty; // tells us which buckets are empty
};

template<class E, class K>
HashTable<E,K>::HashTable(int divisor)
{// Constructor:
 D = divisor;

 //allocate hash table arrays
 // set all buckets to empty

 // YOUR TASK
}

template<class E, class K>
int HashTable<E,K>::hSearch(const K& k) const
{// Search an open addressed table.
 // Return location of element with key k if present.
 // Otherwise return insert point if there is space.
   int i = k % D; // home bucket
   int j = i;     // start at home bucket
   do {
      if (empty[j] || ht[j] == k) return j;
      j = (j + 1) % D;  // next bucket
   } while (j != i); // returned to home?

   return j;  // table full
}

template<class E, class K>
bool HashTable<E,K>::Search(const K& k, E& e) const
{
	// Put element that matches k in e.
 	// Return false if no match.

	// YOUR TASK
}

template<class E, class K>
HashTable<E,K>& HashTable<E,K>::Insert(const E& e)
{
	// Hash table insert. Throw BadInput() if duplicate and NoMem() if full.

	// YOUR TASK
}

template<class E, class K>
void HashTable<E,K>::Output()
{
   for (int i = 0; i< D; i++) {
      if (empty[i]) cout << "empty" << endl;
      else cout << ht[i] << endl;}
}

#endif
