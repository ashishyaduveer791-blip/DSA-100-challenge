class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def insert_end(self, data):
        new_node = Node(data)

        if self.head is None:
            self.head = new_node
            return

        temp = self.head
        while temp.next:
            temp = temp.next
        temp.next = new_node

    def merge(self, other):
        dummy = Node(0)
        tail = dummy

        p1 = self.head
        p2 = other.head

        while p1 and p2:
            if p1.data <= p2.data:
                tail.next = p1
                p1 = p1.next
            else:
                tail.next = p2
                p2 = p2.next
            tail = tail.next

        if p1:
            tail.next = p1
        else:
            tail.next = p2

        merged = LinkedList()
        merged.head = dummy.next
        return merged

    def display(self):
        temp = self.head
        while temp:
            print(temp.data, end=" ")
            temp = temp.next


# Main Program
list1 = LinkedList()
list2 = LinkedList()

n = int(input())
arr1 = list(map(int, input().split()))
for num in arr1:
    list1.insert_end(num)

m = int(input())
arr2 = list(map(int, input().split()))
for num in arr2:
    list2.insert_end(num)

merged_list = list1.merge(list2)
merged_list.display()