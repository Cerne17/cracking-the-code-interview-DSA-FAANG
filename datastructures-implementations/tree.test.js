const Tree = require('./tree');

describe('Tree', () => {
    const newTree = new Tree();
    describe('insert', () => {
        it('should insert a new node', () => {
            newTree.insert(newTree.nodes, 5);
            expect(newTree.nodes.value).toEqual(5);
        });
        it('should insert a new node to the left', () => {
            newTree.insert(newTree.nodes, 4);
            expect(newTree.nodes.left.value).toEqual(4);
        });
        it('should insert a new node to the right', () => {
            newTree.insert(newTree.nodes, 6);
            expect(newTree.nodes.right.value).toEqual(6);
        });
    });
});
