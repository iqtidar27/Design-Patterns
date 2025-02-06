#pragma once

class IDisplayElement
{
public:
    virtual ~IDisplayElement() = default;
    virtual void display() = 0;
};