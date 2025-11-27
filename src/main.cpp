#include <cstdint>
#include <iostream>
#include "data_structure/linked_list.h"
#include "algorithm/list_algorithm.h"

auto main(int argc, char *argv[]) -> int {
    learn::algorithm::ListAlgorithms algor;
    learn::ds::ListNode<int32_t>* head = algor.generate_list(10);
    head = algor.reverse_list(head);

    

    
    return 0;
}
