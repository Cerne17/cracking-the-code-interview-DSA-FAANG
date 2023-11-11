const queue = require('./queue');

test("The queue initializes empty", () =>  {
    const q = new queue();
    expect(
        q.data.length
    ).toBe(0);
});

test("The queue enqueuees an element", () =>  {
    const q = new queue();
    q.enqueue(1);
    expect(
        q.data.length
    ).toBe(1);
});

test("The queue dequeues an element", () =>  {
    const q = new queue();
    q.enqueue(1);
    q.dequeue();
    expect(
        q.data.length
    ).toBe(0);
});

test("The queue is a FIFO", () =>  {
    const q = new queue();
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.dequeue();
    expect(
        q.get()
    ).toEqual([2, 3]);
    q.dequeue();
    expect(
        q.get()
    ).toEqual([3]);
    q.dequeue();
    expect(
        q.get()
    ).toEqual([]);
});
