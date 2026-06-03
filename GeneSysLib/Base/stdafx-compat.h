/*
 * Compatibility headers for newer Boost versions
 * This file provides fallback definitions for deprecated TR1 components
 */

#ifndef __STDAFX_COMPAT_H__
#define __STDAFX_COMPAT_H__

// boost/tr1/unordered_map.hpp - Use std::unordered_map instead in modern C++11+
#include <unordered_map>
namespace boost {
    namespace tr1 {
        using std::unordered_map;
    }
}

// boost/tr1/tuple.hpp - Use std::tuple instead
#include <tuple>
namespace boost {
    namespace tr1 {
        using std::tuple;
        using std::get;
    }
}

// boost/functional/hash.hpp - Provide a minimal hash_combine if needed
#include <boost/utility/hash_combine.hpp>

#endif // __STDAFX_COMPAT_H__
