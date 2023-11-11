const stack = require('./stack'); 

test('Stack is empty', () => {
    const s = new stack();
    expect(
        s.data.length
    ).toBe(0);
});
test('Push an element', () => {
    const s = new stack();
    s.push(1);
    expect(
        s.data.length
    ).toBe(1);
});

test('Pop an element', () => {
    const s = new stack();
    s.push(1);
    s.pop();
    expect(
        s.data.length
    ).toBe(0);
});

test('Adds multiple elements to test if the stack is a LIFO', () => {
    const s = new stack();
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    expect(
        s.get()
    ).toEqual([1,2]);

    s.pop();

    expect(
        s.get()
    ).toEqual([1]);
    
        s.pop();

    expect(
        s.get()
    ).toEqual([]);
});
