//
// Created by GiorgosDev on 3/19/2024.
//

#ifndef LIST_H
#define LIST_H

#include <iostream>
//TODO: Finish the dynamic list

class List {
private:
    int _size;

public:
    //Constructors and Destructors
    explicit List(int size = 0) : _size(size) {}
    ~List() = default;


    ///Shows all members of the List
    static void PrintAll(char* msg);
};



#endif //LIST_H
