//
// Created by GiorgosDev on 3/31/2024.
//

#ifndef NODE_H
#define NODE_H

class Node {
private:
    Node* _nextNode;//pointer to the next member of the list

public :
    Node() {
    _nextNode = nullptr;
}
    //Getters and Setters
    Node* GetNextNode() {
    return _nextNode;
}
    void SetNextNode(Node* nextNode) {
    _nextNode = nextNode;
    nextNode = nullptr;

}
};



#endif //NODE_H
