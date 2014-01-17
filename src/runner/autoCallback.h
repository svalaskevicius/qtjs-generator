#pragma once


struct AutoCallback
{
    std::function<void()> destruct;

    AutoCallback(std::function<void()> destruct)
        : destruct(destruct)
    {
    }

    ~AutoCallback()
    {
        destruct();
    }
};
