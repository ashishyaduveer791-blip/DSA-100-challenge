class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def insert(self, data):
        """Append a new node with the given data to the end of the list."""
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            return
        temp = self.head
        while temp.next:
            temp = temp.next
        temp.next = new_node

    def delete(self, key):
        """Delete the first node with value == key. If not found, print a message."""
        temp = self.head
        # delete head node
        if temp and temp.data == key:
            self.head = temp.next
            return
        prev = None
        while temp and temp.data != key:
            prev = temp
            temp = temp.next
        if temp is None:
            print("Element not found!")
            return
        prev.next = temp.next

    def display(self):
        """Print the list in the form: val1->val2->...->None"""
        temp = self.head
        while temp:
            print(temp.data, end="->")
            temp = temp.next
        print("None")


if __name__ == "__main__":
    l1 = LinkedList()
    try:
        n = int(input("Enter the number of elements: "))
    except ValueError:
        print("Invalid number")
        exit(1)

    for i in range(n):
        try:
            value = int(input(f"Enter element {i+1}: "))
        except ValueError:
            print("Invalid input, skipping this element")
            continue
        l1.insert(value)

    print("\nLinked list:")
    l1.display()

    try:
        delete_value = int(input("\nEnter the value to delete: "))
        l1.delete(delete_value)
        print("\nLinked list after deletion:")
        l1.display()
    except ValueError:
        print("Invalid input for deletion")
