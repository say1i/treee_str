#pragma once
#include "ITree.h"

class tree : public ITree {
private:
    node* root = nullptr;
    void fixIndexes(node* n, int index);

public:
    ~tree() override;

    node* head() const override;
    void push(const std::string& x) override;
    int lookfor(const std::string& x) override;
    bool eliminate(const std::string& x) override;
    void show() const override;
    std::string findMaxByLetters() override;
    std::vector<node*> getKStage(int k) override;
    std::string findMaxByLength() override;
    std::string findMaxByLengthOnKLevel(int k) override;
};
