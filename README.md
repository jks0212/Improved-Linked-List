# Improved-Linked-List
### General Linked List
If nodes be inserted 8, 4, 6, 2 in that order

<code>(head=8) -> 4 -> 6 -> 2 -> null</code>

the list will be formed like ut supra.
If nodes be inserted like this, node insertion time complexity will be O(n).

### Improved Linked List
Improved method is so simple for use but it seems not general.
This method is not added to back of the last node whenever new node insertion causes but it added back of the head node so time complexity is O(1).
In improved method, If nodes be inserted 8, 4, 6, 2 in that order

<code>head -> 2 -> 6 -> 4 -> 8 -> null</code>

the list will be formed reversly ut supra.

### Example and Tutorial
There is a simple c++ example code. If you need, compile and execute <code>linked_list.cc</code> source file which is in this project.
