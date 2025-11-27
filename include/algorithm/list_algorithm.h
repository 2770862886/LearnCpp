#include <cstdint>
#include "data_structure/linked_list.h"

namespace learn {
namespace algorithm {

class ListAlgorithms {
public:
    learn::ds::ListNode<int32_t> *generate_list(int32_t count);
    learn::ds::ListNode<int32_t>* reverse_list(learn::ds::ListNode<int32_t>* head);

    void dump_list(learn::ds::ListNode<int32_t>* head);
};

} // namespace algorithm
} // namespace learn



