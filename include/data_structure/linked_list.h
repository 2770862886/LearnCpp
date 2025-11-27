#pragma once

namespace learn {
namespace ds {

template<typename T>
struct ListNode {
  ListNode(T v) {
    value = v;
  }

  T value;
  ListNode<T>* next;
};

} // namespace data_structure
} // namespace learn


