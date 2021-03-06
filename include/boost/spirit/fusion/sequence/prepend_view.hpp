/*=============================================================================
    Copyright (c) 2003 Joel de Guzman

    Use, modification and distribution is subject to the Boost Software
    License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/
#if !defined(FUSION_SEQUENCE_PREPEND_VIEW_HPP)
#define FUSION_SEQUENCE_PREPEND_VIEW_HPP

#include <boost/spirit/fusion/sequence/joint_view.hpp>
#include <boost/spirit/fusion/sequence/single_view.hpp>

namespace boost { namespace fusion
{
    template <typename View, typename T>
    struct prepend_view : joint_view<single_view<T>, View>
    {
        prepend_view(View& view, T const& val)
            : joint_view<single_view<T>, View>(held, view)
            , held(val) {}
        single_view<T> held;
    };
}}

#endif


