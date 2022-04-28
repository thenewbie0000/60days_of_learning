# ARRAY
from locale import currency
from platform import node

numbers = []
print(numbers)
numbers.extend([3, 4, 8, 1, 10])
print(numbers)
numbers.sort()
print(numbers)
numbers.remove(4)
print(numbers)
print(numbers.index(10))

# LINKED LIST

""" LINKED LIST is the linear data structure where each element is contained in a separate object called NODE
NODE models two pieces of information:
    a) an individual item of the data we want to store
    b) reference to the next node in the list
    c) First NODE = Head of the list
    d) Last NODE = Tail of the list
NODE means self referential object
Definition of NODE contains definition of another next NODE in the list

Two types linked list: single linked list, doubly linked list
"""


class Node:
    """
    An object for storing a single node of a linked list
    Models is two attributes - data and the link to the next node in the list
    """
    data = None
    next_node = None

    def __init__(self, data):
        self.data = data

    def __repr__(self):
        return "<Nodes data: %s>" % self.data


class LinkedList:
    """
    Singly Linked List
    """

    def __init__(self):
        self.head = None

    def is_empty(self):
        return self.head == None

    def size(self):
        """
        Returns the number of nodes in the list
        Takes O(n) run time
        """
        current = self.head
        count = 0

        while current:
            count += 1
            current = current.next_node

        return count

    def add(self, data):
        """
        Adds new Node containing data at head of the list
        Takes constant time which is our best case scenario O(1)
        """
        new_node = Node(data)
        new_node.next_node = self.head
        self.head = new_node

    def search(self, key):
        """
        Search for the first node containing data tha matches the key
        Return the node or 'None' if not found

        Takes O(n) time
        """

        current = self.head

        while current:
            if current.data == key:
                return current
            else:
                current = current.next_node
        return None

def insert(self,data, index):
    """
    Inserts a new Node containing data at the index position
    Insertion takes O(1) time but finding the node at the 
    insertion point takes O(n) time.

    Takes overall (n) time.
    """
    if index == 0:
        self.add(data)

    if index > 0:
        new = Node(data)

        position = index
        current = self.head

        while position > 1:
            current = Node.next_node
            position = position - 1

        prev_node = current
        next_node = current.next_node

        prev_node.next_node = new
        new.next_node = next_node

    def remove(self, key):
        """
        Removes Nodes containing data thta matches the key
        Returns the node or None if key doesn't exist
        Takes O(n) time
        """
        current = self.head
        previous = None
        found =  False

        while current and not found:
            if current.data == key and current is self.head:
                found = True
                self.head = current.next_node
            elif current.data ==key:
                found = True
                previous.next_node = current.next_node
            else:
                previous = current
                current = current.next_node
        
        return current


    def __repr__(self):
        """
        Return a string representation of the list
        Take O(n) time
        """
        nodes = []
        current = self.head

        while current:
            if current is self.head:
                nodes.append("[Head: %s]" % current.data)
            elif current.next_node is None:
                nodes.append("[Tail: %s]" % current.data)
            else:
                nodes.append("[%s]" % current.data)

            current = current.next_node
        return '-> '.join(nodes)
