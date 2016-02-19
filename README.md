# Improved-Linked-List

향상시킨 방법은 매우 간단해서 많이 쓸 것 같지만 일반적이지 않은 것 같아 직접 구현해 봤다.
이 방식은 새 노드가 입력 될 때 마다 맨 끝 노드에 추가되는 것이 아니라 헤더 노드 바로 뒤에 추가되어 입력 시간이 O(1)이 된다.
새로운 방식에서 노드들이 8, 4, 6, 2 순서대로 입력된다면

<code>head -> 2 -> 6 -> 4 -> 8 -> null</code>

위와 같이 역순으로 입력된다.

### 예제 및 튜토리얼
c++로 된 간단한 예제 코드를 만들었습니다. 필요하신 분은 이 프로젝트에 있는 <code>linked_list.cc</code>를 직접 실행해보세요.

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
