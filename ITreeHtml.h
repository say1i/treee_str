#pragma once
#include <string>
#include "ITree.h"

class ITreeHtml {
public:
    virtual ~ITreeHtml() = default;
    virtual void push(const ITree& instance, const std::string& description = "") = 0;
    virtual bool save() const = 0;
};
