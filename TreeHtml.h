#pragma once
#include "ITreeHtml.h"
#include <sstream>
#include <queue>

class treeHtml : public ITreeHtml {
private:
    std::string file, title;
    mutable std::ostringstream out;

    void add_node(std::queue<node*>& nodes, node*& temp, node* child, bool is_left);

public:
    explicit treeHtml(std::string file = "", std::string title = "Бинарное Дерево");

    void push(const ITree& instance, const std::string& description = "") override;
    bool save() const override;
};
