class Node{
    private:
        int value;
        Node* next;

    public:
        Node(int val){
            value = val;
            next = nullptr;
        }

        int getValue(){
            return value;
        }

        void setValue(int newVal){
            value = newVal;
        }

        Node* getNext(){
            return next;
        }

        void setNext(Node* newNext){
            next = newNext;
        }
};