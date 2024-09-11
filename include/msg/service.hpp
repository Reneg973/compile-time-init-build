#pragma once

#include <cib/builder_meta.hpp>
#include <msg/handler_builder.hpp>
#include <msg/handler_interface.hpp>

#include <stdx/tuple.hpp>

namespace msg {
template <typename MsgBase, typename... ExtraCallbackArgs>
struct service
    : cib::builder_meta<
          handler_builder<stdx::tuple<>, MsgBase, ExtraCallbackArgs...>,
          handler_interface<MsgBase, ExtraCallbackArgs...> const *> {};
} // namespace msg
