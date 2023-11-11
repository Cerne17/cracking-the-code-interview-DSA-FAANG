module.exports = class Queue {
    constructor () {
        this.data = [];
    }
    enqueue (element) {
        this.data.push(element);
    }
    dequeue () {
        this.data.shift();
    }
    get () {
        return this.data;
    }
}
