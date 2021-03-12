class List{
    private: 
        Node* head = nullptr;

    public:
        Node* getHead(){
            return head;
        }

        void insert(int val){
            Node* newNode = new Node(val);
            newNode->setNext(head);
            this->head=newNode;
        }

        void printList(){
            Node* current = head;
            while (current != nullptr){
                printf("Node: %d\n", current->getValue());
                current = current->getNext();
            }
        }
};