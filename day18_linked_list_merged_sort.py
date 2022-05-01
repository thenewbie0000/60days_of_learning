from day15_linkedlist_continued import LinkedList

def merge_sort(linked_list):
    """
    -Sorts a linked list in a ascending order
    -Recursively divides linked list into sublists containing a single node
    -Repeatedly merge the sublists to produce sorted sublists until one remains

    Returns a sorted linked list
    """

    if linked_list.size() == 1:
         return linked_list
    elif linked_list.head is None:
        return linked_list

    left_half, right_half =  split(linked_list)
    left = merge_sort(left_half)
    right = merge_sort(right_half)

    return merge(left, right)

def split(linked_list):
    """
    Divides the unsorted linked list at midpoint into sublists
    """
    if linked_list == None or linked_list.head ==  None:
        left_half = linked_list
        right_half = None

        return left_half, right_half
    else:
        size = linked_list.size()
        mid = size // 2

        mid_node = linked_list.node_at_index(mid - 1)

        left_half = linked_list
        right_half = LinkedList()
        right_half.head = mid_node.next_node
        mid_node.next_node = None

        return left_half, right_half

def merge(left, right):
    """
    This function merges two linked list sorting by data in nodes 
    Returns a new, merged list
    """

    # Create a new linked list that contained nodes from MERGING M
    merged = LinkedList()

    # Add a fake head that is discarded later 
    merged.add(0)

    # Set current to the head of the Linked List
    current = merged.head

    # Obtain head nodes for the left and right Linked List
    left_head = left.head
    right_head = right.head
    
