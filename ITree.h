#pragma once
#include <string>
#include <vector>
#include "Node.h"

class ITree {
public:
    virtual ~ITree() = default;

    virtual node* head() const = 0;
    virtual void push(const std::string& x) = 0;
    virtual int lookfor(const std::string& x) = 0;
    virtual bool eliminate(const std::string& x) = 0;
    virtual void show() const = 0;
    virtual std::string findMaxByLetters() = 0;
    virtual std::vector<node*> getKStage(int k) = 0;
    virtual std::string findMaxByLength() = 0;
    virtual std::string findMaxByLengthOnKLevel(int k) = 0;
};
