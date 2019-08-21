//
// Created by Charles Chang on 2019-08-21.
//

#ifndef SINGLELINKLIST_LINKEDLIST_H
#define SINGLELINKLIST_LINKEDLIST_H

#include <iostream>
class LinkedList;
class ListNode{
private:
    int data;
    ListNode *next;
public:
    ListNode():data(0),next(0){};
    ListNode(int a):data(a),next(0){};
    friend class LinkedList;
};
class LinkedList{

};
#endif //SINGLELINKLIST_LINKEDLIST_H
