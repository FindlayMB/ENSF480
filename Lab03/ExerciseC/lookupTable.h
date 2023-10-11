/*
 * File Name: lookupTable.h
 * Assignment: Lab 3 Exercise C
 * Lab Section: B02
 * Completed by: Findlay Brown, Nimna Wijedasa
 * Submission Date: Oct 11, 2023
 */

#ifndef LOOKUPTABLE_H
#define LOOKUPTABLE_H
#include <iostream>
using namespace std;

// class LookupTable: GENERAL CONCEPTS
//
//    key/datum pairs are ordered.  The first pair is the pair with
//    the lowest key, the second pair is the pair with the second
//    lowest key, and so on.  This implies that you must be able to
//    compare two keys with the < operator.
//
//    Each LookupTable has an embedded iterator class that allows users
//    of the class to traverse trhough the list and  have acess to each
//    node.

#include "customer.h"

//    In this version of the LookupTable a new struct type called Pair
//    is introduced which represents a key/data pair.

typedef int LT_Key;
typedef Customer LT_Datum;

template <class Key, class Data>
class LookupTable;

template <class Key, class Data>
struct Pair
{
  Pair(Key keyA, Data datumA) : key(keyA), datum(datumA)
  {
  }

  Key key;
  Data datum;
};

template <class Key, class Data>
class LT_Node
{
  friend class LookupTable<Key, Data>;

private:
  Pair<Key, Data> pairM;
  LT_Node<Key, Data> *nextM;

  // This ctor should be convenient in insert and copy operations.
  LT_Node(const Pair<Key, Data> &pairA, LT_Node *nextA);
};

template <class Key, class Data>
class LookupTable
{
public:
  // Nested class
  class Iterator
  {
    friend class LookupTable;
    LookupTable *LT;
    //    LT_Node* cursor;

  public:
    Iterator() : LT(0) {}
    Iterator(LookupTable &x) : LT(&x) {}
    const Data &operator*();
    const Data &operator++();
    const Data &operator++(int);
    int operator!();

    void step_fwd()
    {
      assert(LT->cursor_ok());
      LT->step_fwd();
    }
  };

  LookupTable();
  LookupTable(const LookupTable &source);
  LookupTable &operator=(const LookupTable &rhs);
  ~LookupTable();

  LookupTable &begin();

  int size() const;
  // PROMISES: Returns number of keys in the table.

  int cursor_ok() const;
  // PROMISES:
  //   Returns 1 if the cursor is attached to a key/datum pair,
  //   and 0 if the cursor is in the off-list state.

  const Key &cursor_key() const;
  // REQUIRES: cursor_ok()
  // PROMISES: Returns key of key/datum pair to which cursor is attached.

  const Data &cursor_datum() const;
  // REQUIRES: cursor_ok()
  // PROMISES: Returns datum of key/datum pair to which cursor is attached.

  void insert(const Pair<Key, Data> &pairA);
  // PROMISES:
  //   If keyA matches a key in the table, the datum for that
  //   key is set equal to datumA.
  //   If keyA does not match an existing key, keyA and datumM are
  //   used to create a new key/datum pair in the table.
  //   In either case, the cursor goes to the off-list state.

  void remove(const Key &keyA);
  // PROMISES:
  //   If keyA matches a key in the table, the corresponding
  //   key/datum pair is removed from the table.
  //   If keyA does not match an existing key, the table is unchanged.
  //   In either case, the cursor goes to the off-list state.

  void find(const Key &keyA);
  // PROMISES:
  //   If keyA matches a key in the table, the cursor is attached
  //   to the corresponding key/datum pair.
  //   If keyA does not match an existing key, the cursor is put in
  //   the off-list state.

  void go_to_first();
  // PROMISES: If size() > 0, cursor is moved to the first key/datum pair
  //   in the table.

  void step_fwd();
  // REQUIRES: cursor_ok()
  // PROMISES:
  //   If cursor is at the last key/datum pair in the list, cursor
  //   goes to the off-list state.
  //   Otherwise the cursor moves forward from one pair to the next.

  void make_empty();
  // PROMISES: size() == 0.

  template <class K, class D>
  friend ostream &operator<<(ostream &os, const LookupTable<K, D> &lt);

private:
  int sizeM;
  LT_Node<Key, Data> *headM;
  LT_Node<Key, Data> *cursorM;

  void destroy();
  // Deallocate all nodes, set headM to zero.

  void copy(const LookupTable &source);
  // Establishes *this as a copy of source.  Cursor of *this will
  // point to the twin of whatever the source's cursor points to.
};

#endif

template <class Key, class Data>
LookupTable<Key, Data> &LookupTable<Key, Data>::begin()
{
  cursorM = headM;
  return *this;
}

template <class Key, class Data>
LT_Node<Key, Data>::LT_Node(const Pair<Key, Data> &pairA, LT_Node *nextA)
    : pairM(pairA), nextM(nextA)
{
}

template <class Key, class Data>
LookupTable<Key, Data>::LookupTable()
    : sizeM(0), headM(0), cursorM(0)
{
}

template <class Key, class Data>
LookupTable<Key, Data>::LookupTable(const LookupTable &source)
{
  copy(source);
}

template <class Key, class Data>
LookupTable<Key, Data> &LookupTable<Key, Data>::operator=(const LookupTable<Key, Data> &rhs)
{
  if (this != &rhs)
  {
    destroy();
    copy(rhs);
  }
  return *this;
}

template <class Key, class Data>
LookupTable<Key, Data>::~LookupTable()
{
  destroy();
}

template <class Key, class Data>
int LookupTable<Key, Data>::size() const
{
  return sizeM;
}

template <class Key, class Data>
int LookupTable<Key, Data>::cursor_ok() const
{
  return cursorM != 0;
}

template <class Key, class Data>
const Key &LookupTable<Key, Data>::cursor_key() const
{
  assert(cursor_ok());
  return cursorM->pairM.key;
}

template <class Key, class Data>
const Data &LookupTable<Key, Data>::cursor_datum() const
{
  assert(cursor_ok());
  return cursorM->pairM.datum;
}

template <class Key, class Data>
void LookupTable<Key, Data>::insert(const Pair<Key, Data> &pairA)
{
  // Add new node at head?
  if (headM == 0 || pairA.key < headM->pairM.key)
  {
    headM = new LT_Node<Key, Data>(pairA, headM);
    sizeM++;
  }

  // Overwrite datum at head?
  else if (pairA.key == headM->pairM.key)
    headM->pairM.datum = pairA.datum;

  // Have to search ...

  else
  {
    LT_Node<Key, Data> *before = headM;
    LT_Node<Key, Data> *after = headM->nextM;

    while (after != NULL && (pairA.key > after->pairM.key))
    {
      before = after;
      after = after->nextM;
    }

    if (after != NULL && pairA.key == after->pairM.key)
    {
      after->pairM.datum = pairA.datum;
    }
    else
    {
      before->nextM = new LT_Node<Key, Data>(pairA, before->nextM);
      sizeM++;
    }
  }
}

template <class Key, class Data>
void LookupTable<Key, Data>::remove(const Key &keyA)
{

  if (headM == 0 || keyA < headM->pairM.key)
    return;

  LT_Node<Key, Data> *doomed_node = 0;
  if (keyA == headM->pairM.key)
  {
    doomed_node = headM;
    headM = headM->nextM;
    sizeM--;
  }
  else
  {
    LT_Node<Key, Data> *before = headM;
    LT_Node<Key, Data> *maybe_doomed = headM->nextM;
    while (maybe_doomed != 0 && keyA > maybe_doomed->pairM.key)
    {
      before = maybe_doomed;
      maybe_doomed = maybe_doomed->nextM;
    }

    if (maybe_doomed != 0 && maybe_doomed->pairM.key == keyA)
    {
      doomed_node = maybe_doomed;
      before->nextM = maybe_doomed->nextM;
      sizeM--;
    }
  }
  delete doomed_node; // Does nothing if doomed_node == 0.
}

template <class Key, class Data>
void LookupTable<Key, Data>::find(const Key &keyA)
{
  LT_Node<Key, Data> *ptr = headM;
  while (ptr != NULL && ptr->pairM.key != keyA)
  {
    ptr = ptr->nextM;
  }

  cursorM = ptr;
}

template <class Key, class Data>
void LookupTable<Key, Data>::go_to_first()
{
  cursorM = headM;
}

template <class Key, class Data>
void LookupTable<Key, Data>::step_fwd()
{
  assert(cursor_ok());
  cursorM = cursorM->nextM;
}

template <class Key, class Data>
void LookupTable<Key, Data>::make_empty()
{
  destroy();
  sizeM = 0;
  cursorM = 0;
}

template <class Key, class Data>
void LookupTable<Key, Data>::destroy()
{

  LT_Node<Key, Data> *ptr = headM;
  while (ptr != NULL)
  {
    headM = headM->nextM;
    delete ptr;
    ptr = headM;
  }
  cursorM = NULL;
  sizeM = 0;
}

template <class Key, class Data>
void LookupTable<Key, Data>::copy(const LookupTable &source)
{

  headM = 0;
  cursorM = 0;

  if (source.headM == 0)
    return;

  for (LT_Node<Key, Data> *p = source.headM; p != 0; p = p->nextM)
  {
    insert(Pair<Key, Data>(p->pairM.key, p->pairM.datum));
    if (source.cursorM == p)
      find(p->pairM.key);
  }
}

template <class Key, class Data>
ostream &operator<<(ostream &os, const LookupTable<Key, Data> &lt)
{
  if (lt.cursor_ok())
  {
    os << lt.cursor_key() << "  " << lt.cursor_datum();
  }
  else
  {
    os << "Not Found.";
  }

  return os;
}

// Iterator functions
template <class Key, class Data>
const Data &LookupTable<Key, Data>::Iterator::operator*()
{
  assert(LT->cursor_ok());
  return LT->cursor_datum();
}

template <class Key, class Data>
const Data &LookupTable<Key, Data>::Iterator::operator++()
{
  assert(LT->cursor_ok());
  const Data &x = LT->cursor_datum();
  LT->step_fwd();
  return x;
}

template <class Key, class Data>
const Data &LookupTable<Key, Data>::Iterator::operator++(int)
{
  assert(LT->cursor_ok());

  LT->step_fwd();
  return LT->cursor_datum();
}

template <class Key, class Data>
int LookupTable<Key, Data>::Iterator::operator!()
{
  return (LT->cursor_ok());
}
