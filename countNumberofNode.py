class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def insert(self, data):
        new_node = Node(data)

        if self.head is None:
            self.head = new_node
        else:
            current = self.head
            while current.next is not None:
                current = current.next
            current.next = new_node

    def count_nodes(self):
        count = 0
        current = self.head

        while current is not None:
            count += 1
            current = current.next

        return count


# User Input
n = int(input("Enter number of nodes: "))

ll = LinkedList()

print("Enter node values:")
for i in range(n):
    value = int(input())
    ll.insert(value)

print("Number of nodes:", ll.count_nodes())