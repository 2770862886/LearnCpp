#include "algorithm/list_algorithm.h"
#include "data_structure/linked_list.h"
#include <cstdint>
#include <iostream>

namespace learn {
namespace algorithm {

learn::ds::ListNode<int32_t> *ListAlgorithms::generate_list(int32_t count) {
    int i = 0;
    learn::ds::ListNode<int32_t>* head = new learn::ds::ListNode<int32_t>(0);
    learn::ds::ListNode<int32_t>* curr = head;
    while (++i < count) {
      curr->next = new learn::ds::ListNode<int32_t>(i);
      curr = curr->next;
    }
    return head;
}

learn::ds::ListNode<int32_t> *
ListAlgorithms::reverse_list(learn::ds::ListNode<int32_t> *head) {
  ds::ListNode<int32_t>* prev = nullptr;
  ds::ListNode<int32_t>* curr = head;

  while (curr) {
    ds::ListNode<int32_t>* tmp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = tmp;
  }

  return prev;
}

void ListAlgorithms::dump_list(learn::ds::ListNode<int32_t>* head) {
    ds::ListNode<int32_t>* curr = head;
    while (curr) {
      std::cout << curr->value << std::endl;
      curr = curr->next;
    }
  
}

} // namespace algorithm
} // namespace learn

