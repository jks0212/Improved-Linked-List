# Improved-Linked-List
### 일반적인 Linked List
일반적으로 링크드리스트에 8, 4, 6, 2 노드들이 차례로 입력된다면

<code>(head=8) -> 4 -> 6 -> 2 -> null</code>

위와 같은 형태가 된다.
이런식으로 입력이 된다면 입력할 때 마다 맨 끝 노드에 추가되기 때문에 O(n)의 시간이 걸린다.

### 향상된 Linked List
향상시킨 방법은 매우 간단해서 많이 쓸 것 같지만 일반적이지 않은 것 같아 직접 구현해 봤다.
이 방식은 새 노드가 입력 될 때 마다 맨 끝 노드에 추가되는 것이 아니라 헤더 노드 바로 뒤에 추가되어 입력 시간이 O(1)이 된다.
새로운 방식에서 노드들이 8, 4, 6, 2 순서대로 입력된다면

<code>head -> 2 -> 6 -> 4 -> 8 -> null</code>

위와 같이 역순으로 입력된다.
