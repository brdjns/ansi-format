#pragma once

#include <cstdint> // for uint32_t


        // This is an integer wrapper
        // This comment block is supposed to describe
        // this class, but this class is totally trivial
        // and boring
template<typename I>
class Integer
{
private:
    I value_;

public:
    constexpr I get() const { return value_; }
    constexpr I& set(I new_value) { value_ = new_value; }
};