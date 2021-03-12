class Node{
    private:
        int value;
        Node* next;

    public:
        Node(int val){
            this->value = val;
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