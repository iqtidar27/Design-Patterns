#pragma once

namespace ws
{
    class IDisplayElement
    {
    public:
        virtual ~IDisplayElement() = default;

        virtual void display() = 0;
    };
} // namespace ws