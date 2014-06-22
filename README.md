# How does it work?

```c

char* obj = strdup("test");

void *q = llqueue_new();

llqueue_offer(q, obj);

llqueue_poll(q);

```

# Building
$make

# Todo

- Make lockfree variant using CAS

