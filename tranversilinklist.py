class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class SinglyLinkedList:
    def __init__(self):
        self.head = None

    def insert(self, data):
        new_node = Node(data)

        if self.head is None:
            self.head = new_node
        else:
            temp = self.head
            while temp.next is not None:
                temp = temp.next
            temp.next = new_node

    def traverse(self):
        if self.head is None:
            print("Linked List is Empty")
            return

        temp = self.head
        while temp is not None:
            print(temp.data, end=" -> ")
            temp = temp.next
        print("None")


# Driver Code
ll = SinglyLinkedList()

n = int(input("Enter the number of nodes: "))

for i in range(n):
    value = int(input(f"Enter data for node {i+1}: "))
    ll.insert(value)

print("\nLinked List:")
ll.traverse()