#pragma once

class Turkey
{
public:
    virtual ~Turkey() = default;
    virtual void gooble() = 0;
    virtual void fly() = 0;
};